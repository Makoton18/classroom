#include<stdio.h>

int main(void)
{
    int nx,ny;
    int *p;

    p=&nx;
    *p=100;
    p=&ny;
    *p=300;
    printf("nx�̒l=%d\n",nx);
    printf("nx�̒l=%d\n",ny);
    return(0);
}
