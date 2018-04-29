#include <stdio.h>
#include <stdlib.h>//malloc(free�֐�)
#include <string.h>//strcpy
typedef struct hito{
    char shimei[21];
    float shincho;
    struct hito *next
} HITO;

void InputData(void);
HITO *SearchHigh(void);
void FreeData(HITO *p);

HITO *root,*last;

int main(void){
 HITO *hp;

 InputData();
 hp=SearchHigh();
 if(hp!=NULL){
    printf("�w���ł������̂́A%s����(%lf cm)�ł�\n",
    hp->shimei,hp->shincho);
 }
 FreeData(root);
 return(0);
}

void InputData(void)
{
    HITO *ptr;
    char name[21];
    float height;

    last = root = NULL;
    printf("�f�[�^����(������END�Ɠ��͂���ƏI��)\n");
    while(1){
        printf("��������:");
        scanf("%s",name);
        if(strcmp(name,"END")==0){
            break;
        }
        printf("�g��:");
        scanf("%f",&height);
        ptr = (HITO *)malloc(sizeof(HITO));
        strcpy(ptr->shimei,name);
        ptr->shincho=height;
        ptr->next = NULL;
        if(last == NULL){
            root= ptr;
            last = root;
        }else{
        last->next=ptr;
        last=last->next;
        }
    }
}

HITO * SearchHigh(void)
{
    HITO *ptr;
    HITO *max_ptr =NULL;
    float max = -999.9;

    for(ptr=root;ptr != NULL;ptr=ptr->next){
        if(ptr->shincho>max){
            max=ptr->shincho;
            max_ptr=ptr;
        }
    }
    return max_ptr;
}

void FreeData(HITO *p)
{
    if (p==NULL){
        return;
    }
    FreeData(p->next);
    free(p);
}
