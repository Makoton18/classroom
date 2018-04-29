#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct BookData_tag{
    char *book_name;
    char *author;
    char *publisher;
    int price;
    char *isbn;
    char *note;
    struct BookData_tag *next;
}BookData;

typedef struct BookData_tag;
int chop(char *);
int *my_malloc(size_t);
int input_line(char *,int ,FILE *);
char *my_strdup(char *);
char *input_string(FILE *);
int input_number(FILE *);
void input_data(BookData *);
char *reunput_string(char *);
int reinput_number(int);
void reinput_data(BookData *);
int select_y_or_n(void);
void show_data(BookData *);
void add_data(BookData *);
void regist_data(void);
void show_all(void);
void input_data_fromFile(void);
void updata_data(BookData *);
void delete_data(BookData *,BookData *);
void search(void);
int main(void);

BookData *g_book_data_head;


int chop(char *str){
    int i;

    for(i=0; str[i]!='\n'; i++){
        ;
    }
    str[i]='\0';
}

int *my_malloc(size_t size){
    void *p;
    p=malloc(size);
    if(p==NULL){
        fprintf(stderr,"メモリがたりません\n");
        exit(1);
    }
    return(p);
}

int input_line(char *buf,int size,FILE *fp){
    if(fgets(buf,size,fp)==NULL){
        fprintf(stderr,"終了します\n");
        exit(0);
    }
    chop(buf);
}


char *my_strdup(char *str){
    char *ret;

    ret=(char *)my_malloc(strlen(str)+1);
    strcpy(ret,str);
    return(ret);
}

char *input_string(FILE *fp){
    static char buf[1024];
    char *p;

    input_line(buf,1024,fp);
    p=my_strdup(buf);
    return(p);
}

int input_number(FILE *fp){
    static char buf[1204];
    int number;
    int status;

    for(;;){
        input_line(buf,1024,fp);

        status=sscanf(buf,"%d",&number);
        if (status!=1){
            fprintf(stderr,"入力エラー");
        }else{
            break;
        }
    }
    return(number);
}

void input_data(BookData *data_p){
    printf("署名");
    data_p->book_name=input_string(stdin);
    printf("著者");
    data_p->author=input_string(stdin);
    printf("出版社");
    data_p->publisher=input_string(stdin);
    printf("価格");
    data_p->price=input_number(stdin);
    printf("ISBN>ISBN");
    data_p->isbn=input_string(stdin);
    printf("備考");
    data_p->note=input_string(stdin);
}

char *reinput_string(char *str){
    static char buf[1024];
    char *new_str;

    input_line(buf,1024,stdin);

    if(buf[0]=='\0'){
        return(str);
    }else{
        free(str);
        new_str=my_strdup(buf);
        return(new_str);
    }
}

int reinput_number(int old_value){
    static char buf[1024];
    int result;
    int new_value;

    for(;;){
        input_line(buf,1024,stdin);
        if(buf[0]=='\0'){
            return(old_value);
        }
        result=sscanf(buf,"%d",&new_value);
        if(result!=1){
            fprintf(stderr,"入力エラー！（数値を入れてください）\n");
        }else{
            break;
        }
        return(new_value);
    }
}

void reinput_data(BookData *data_p){
    printf("書名:%s>>",data_p->book_name);

    data_p->book_name=reinput_string(data_p->book_name);

    printf("著名:%s>",data_p->book_name);
    data_p->author=reinput_string(data_p->author);
    printf("出版社:%s>",data_p->publisher);
    data_p->publisher=reinput_string(data_p->publisher);
    printf("価格:%s>",data_p->price);
    data_p->price=reinput_number(data_p->price);
    printf("ISBN:ISBN%s>ISBN",data_p->isbn);
    data_p->isbn=reinput_string(data_p->isbn);
    printf("備考:%s>",data_p->note);
    data_p->note=reinput_string(data_p->note);
}

int select_y_or_n(void){
    static char buf[1024];
    int y_or_n;

    for(;;){
        input_line(buf,1024,stdin);

        y_or_n=tolower((unsigned char)buf[0]);

        if(y_or_n=='y'){
            return(1);
        }else if(y_or_n=='n'){
            return(0);
        }else{
            fprintf(stderr,"YまたはNを入力してください\n");
        }
    }
}

void show_data(BookData *data_p){
    printf("書名: %s\n",data_p->book_name);
    printf("著者: %s\n",data_p->author);
    printf("出版社: %s\n",data_p->publisher);
    printf("価格: %s\n",data_p->price);
    printf("ISBN: %s\n",data_p->isbn);
    printf("備考: %s\n",data_p->note);
}

void add_data(BookData *new_data){
    BookData *tail;
    new_data->next=NULL;

    if(g_book_data_head==NULL){
        g_book_data_head=new_data;
        return;
    }

    for(tail=g_book_data_head; tail->next !=NULL; tail=tail->next){
        ;
    }

    tail->next=new_data;
    return;
}

void regist_data(void){
    BookData temp;
    BookData *data_p;

    for(;;){
        input_data(&temp);
        for(;;){
            printf("入力されたデータは以下のとおりです\n");
            show_data(&temp);

            printf("よろしいですか？(Y/N)\n");
            if(select_y_or_n()){
                data_p=(BookData*)my_malloc(sizeof(BookData));
                *data_p=temp;

                add_data(data_p);

                printf("登録が完了しました\n");
                break;
            }else{
                printf("再入力してください\n");
                printf("変更しない場合は改行のみ押してください\n");
                reinput_data(&temp);
            }
        }
    }
}

void show_all(void){
    BookData *posit;

    for(posit=g_book_data_head; posit!=NULL; posit=posit->next){
        printf("==========================\n");
        show_data(posit);
    }
    return;
}

void free_data(BookData *data_p){
free(data_p->book_name);
    free(data_p->author);
    free(data_p->publisher);
    free(data_p->isbn);
    free(data_p->note);

    free(data_p);
}

void input_data_fromFile(void){
    FILE *in_fp;
    BookData *temp;
    static char aa[1024];
    static char bb[1024];
    static char cc[1024];
    int xx;
    static char dd[1024];
    static char ee[1024];

    if(in_fp==NULL){
        return;
    }

    while(1){
        temp=(BookData *)my_malloc(sizeof(BookData));

        fscanf(in_fp,"%s %s %s %d %s %s\n",aa,bb,cc,dd,&xx,dd,ee);

        temp->book_name=my_strdup(aa);
        temp->author=my_strdup(bb);
        temp->publisher=my_strdup(cc);
        temp->price=xx;
        temp->isbn=my_strdup(dd);
        temp->note=my_strdup(ee);
        temp->next=NULL;

        add_data(temp);
        if(feof(in_fp)){
            fclose(in_fp);
            return;
        }
    }
}

void updata_data(BookData *data_p){

}
void delete_data(BookData *prev,BookData *target){
}
void search(void){
}
int main(void){
}
