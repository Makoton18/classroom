#include <stdio.h>

int sum123(const int*a)
{
    return(a[0]+a[1]+a[2]);
}

int mul123(const int*b)
{
    return(b[0]*b[1]*b[2]);
}

int main(void)
{
    int x[5]={1,3,5,7,9};

    printf("x[0]+x[1]+x[2]=%d\n",sum123(x));
    printf("x[0]*x[1]*x[2]=%d\n",mul123(x));
    return(0);
}
