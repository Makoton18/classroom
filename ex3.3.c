#include<stdio.h>

main()
{
    int a,b;

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a=b++;
    printf("a=b++ の計算結果 a=%d b=%d\n",a,b);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a=++b;
    printf("a=++b の計算結果 a=%d b=%d\n",a,b);


    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a=b--;
    printf("a=b-- の計算結果 a=%d b=%d\n",a,b);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a=--b;
    printf("a=--b の計算結果 a=%d b=%d\n",a,b);
}
