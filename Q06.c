/*2進数のビット数を求める*/

#include<stdio.h>

int main(void)
{
    int x;
    int no=0;

    printf("正の整数値：");
    scanf("%d",&x);

    while(x>0){
        x/=2;
        no++;
    }
    printf("2進数のビット数は%dです。\n",no);
    return(0);
}
