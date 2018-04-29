#include<stdio.h>

main()
{
    int a,b;

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a=b;
    printf("a=b‚ÌŒvŽZŒ‹‰Ê a=%d b=%d\n",a,b);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a+=b;
    printf("a+=b‚ÌŒvŽZŒ‹‰Ê a=%d b=%d\n",a,b);


    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a-=b;
    printf("a-=b‚ÌŒvŽZŒ‹‰Ê a=%d b=%d\n",a,b);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a*=b;
    printf("a*=b‚ÌŒvŽZŒ‹‰Ê a=%d b=%d\n",a,b);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a/=b;
    printf("a/=b‚ÌŒvŽZŒ‹‰Ê a=%d b=%d\n",a,b);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    a%=b;
    printf("a%=b‚ÌŒvŽZŒ‹‰Ê a=%d b=%d\n",a,b);
}
