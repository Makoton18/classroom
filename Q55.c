#include<stdio.h>
int main(void);
char my_strcat(char *,char *,char *);
char my_strcopy(char *,char *);


int main(void)
{
    char String1[30];
    char String2[30];
    char String3[30];
    char String[30];
    printf("name=");scanf("%s",String1);
    printf("name=");scanf("%s",String2);
    printf("name=");scanf("%s",String3);
    my_strcopy(String1,String);
    printf("copy=%s\n",String);
    my_strcat(String1,String2,String3);
    printf("˜連結=%s\n",String1);
    return(0);
}

char my_strcopy(char *a,char *b)
{
    char *p=b;
    while((*b++=*a++)!='\0');
    return(*p);
}

char my_strcat(char *a,char *b,char *c)
{
    int i=0;
    int j=0;
    int k=0;
    int l,m;
    char x[40],y[40];
    while(a[i]!='\0'){
        i++;
    }
    l=i+2;
    while(i<l){
        a[i]='  ';
        i++;
    }

    while((a[i]=b[j])!='\0'){
        i++;
        j++;
    }
    m=i+2;
    while(i<m){
        a[i]='  ';
        i++;
    }
    while((a[i]=c[k])!='\0'){
        i++;
        k++;
    }
    return(*a);
}
