#include<stdio.h>

main()
{
    int a,b,c;

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a<b);
    printf("c=(a<b) の計算結果 c=%d\n",c);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a>b);
    printf("c=(a>b) の計算結果 c=%d\n",c);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a<=b);
    printf("c=(a<=b) の計算結果 c=%d\n",c);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a>=b);
    printf("c=(a>=b) の計算結果 c=%d\n",c);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a==b);
    printf("c=(a==b) の計算結果 c=%d\n",c);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a!=b);
    printf("c=(a!=b) の計算結果 c=%d\n",c);
}
