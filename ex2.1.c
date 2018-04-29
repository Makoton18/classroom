#include<stdio.h>
main()
{
    int val;
    int *ptr;

    val=100;
    ptr=&val;
    *ptr=200;
    printf("val=%d\n",val);
}
