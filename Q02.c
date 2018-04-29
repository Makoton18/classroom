#include<stdio.h>

int min3(int a,int b,int c)
{
    int min = a;

    if(b<min)min = b;
    if(c<min)min = c;
    return(min);
}

int main(void)
{
    printf("min3(%d,%d,%d,)=%d\n",3,2,1,min3(3,2,1));
    printf("min3(%d,%d,%d,)=%d\n",3,2,2,min3(3,2,2));
    printf("min3(%d,%d,%d,)=%d\n",3,1,2,min3(3,1,2));
    printf("min3(%d,%d,%d,)=%d\n",3,2,3,min3(3,2,3));
    printf("min3(%d,%d,%d,)=%d\n",2,1,3,min3(2,1,3));
    printf("min3(%d,%d,%d,)=%d\n",3,3,2,min3(3,3,2));
    printf("min3(%d,%d,%d,)=%d\n",3,3,3,min3(3,3,3));
    printf("min3(%d,%d,%d,)=%d\n",2,2,3,min3(2,2,3));
    printf("min3(%d,%d,%d,)=%d\n",2,3,1,min3(2,3,1));
    printf("min3(%d,%d,%d,)=%d\n",2,3,2,min3(2,3,2));
    printf("min3(%d,%d,%d,)=%d\n",1,3,2,min3(1,3,2));
    printf("min3(%d,%d,%d,)=%d\n",2,3,3,min3(2,3,3));
    printf("min3(%d,%d,%d,)=%d\n",1,2,3,min3(1,2,3));

    return(0);

}
