#include<stdio.h>

main()
{
    int a,b,c;
    int *pd;

    a= 5;
    b=13;
    c=9;

    pd=&a;
    printf("a=%d,b=%d,c=%d,*pd=%d\n",a,b,c,*pd);
    *pd-=4;
    printf("a=%d,b=%d,c=%d,*pd=%d\n",a,b,c,*pd);
    for(c=0; a--; c++){
        b++;
    }
    printf("a=%d,b=%d,c=%d,*pd=%d\n",a,b,c,*pd);
}
