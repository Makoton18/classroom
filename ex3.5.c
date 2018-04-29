#include<stdio.h>

main()
{
    int a,b,c;

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a&&b);
    printf("c=(a&&b) ‚ÌŒvŽZŒ‹‰Ê c=%d\n",c);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(a||b);
    printf("c=(a||b) ‚ÌŒvŽZŒ‹‰Ê c=%d\n",c);

    printf("*input<a>="); scanf("%d",&a);
    printf("*input<b>="); scanf("%d",&b);
    c=(!a);
    printf("c=(!a)) ‚ÌŒvŽZŒ‹‰Ê c=%d\n",c);

}
