#include<stdio.h>
int main(void);
main(void)
{
    int i,moji,total=0;
    printf("数字を入力してください\n");scanf("%d",&moji);
    for(i=1;i<=moji;i++){
        total=total+i;
    }
    printf("%d\n",total);
    return(0);
}
