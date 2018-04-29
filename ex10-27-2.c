#include<stdio.h>

main()
{
    int a,b,c;
    int *pd;

    a= 5;
    b=13;
    c=9;

    c=++a;
    printf("a=%d,b=%d,c=%d,*pd=%d\n",a,b,c,*pd);
    pd=&c;
    printf("a=%d,b=%d,c=%d,*pd=%d\n",a,b,c,*pd);
    b=(*pd)++;
    printf("a=%d,b=%d,c=%d,*pd=%d\n",a,b,c,*pd);
}
