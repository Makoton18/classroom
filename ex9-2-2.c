/*
9-2-2��ύX���Đ擪���󔒁Ay or Y��YES�ƕ\��

#include<stdio.h>

int main(void);

int main()
{
    char achData[80];

    scanf("%s",achData);
    if(achData[0]=='y'||achData[0]=='Y'){
        printf("Yes!\n");
    }else{
        printf("No!\n");
    }
}
*/

//yes Yes YES�̂Ƃ��̂�YES�ƕ\��
#include<stdio.h>
int main(void);

int main()
{
    char achData[80];
    char *p;

    scanf("%s",achData);
    p = achData;

    while(*p){
        if('A'<=*p && *p <='Z'){
                *p += ('a'-'A'); //�������ϊ�
        }
        p++;
    }

    p=achData;
    if(p[0]=='y' && p[1]=='e' && p[2]=='s'){
        printf("Yes!\n");
    }else{
        printf("No!\n");
    }
}
