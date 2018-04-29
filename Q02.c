/*
  課題　２（Q02.c）
  三つの整数地の最小値を求める　（すべての大小関係に対して確認）
*/
#include <stdio.h>
/*---a,b,cの最小値を求める　---*/
int min3(int a,int b,int c)
{
    int  min=a;         /* 最小値　*/

    if(b<min)min=b;
    if(c<min)min=c;
    return(min);
}

int main(void)
{
    printf("min3(%d,%d,%d)=%d\n",3,2,1,min3(3,2,1));    /* a>b>c*/
    printf("min3(%d,%d,%d)=%d\n",3,2,2,min3(3,2,2));    /* a>b=c*/
    printf("min3(%d,%d,%d)=%d\n",3,1,2,min3(3,1,2));    /* a>c>b*/
    printf("min3(%d,%d,%d)=%d\n",3,2,3,min3(3,2,3));    /* a=b>c*/
    printf("min3(%d,%d,%d)=%d\n",2,1,3,min3(2,1,3));    /* c>a>b*/
    printf("min3(%d,%d,%d)=%d\n",3,3,2,min3(3,3,2));    /* a=b>c*/
    printf("min3(%d,%d,%d)=%d\n",3,3,3,min3(3,3,3));    /* a=b=c*/
    printf("min3(%d,%d,%d)=%d\n",2,2,3,min3(2,2,3));    /* c>a=b*/
    printf("min3(%d,%d,%d)=%d\n",2,3,1,min3(2,3,1));    /* b>a>c*/
    printf("min3(%d,%d,%d)=%d\n",2,3,2,min3(2,3,2));    /* b>a=c*/
    printf("min3(%d,%d,%d)=%d\n",1,3,2,min3(1,3,2));    /* b>c>a*/
    printf("min3(%d,%d,%d)=%d\n",2,3,3,min3(2,3,3));    /* b=c>a*/
    printf("min3(%d,%d,%d)=%d\n",1,2,3,min3(1,2,3));    /* c>b>a*/


}
