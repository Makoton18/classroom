#include<stdio.h>
int main(void);
int main(void)
{
    int a,b,c;
    a=12;
    b=15;
    c=50;
    c = a&b;
    c += a|b;
    if(a=0)
    a++;
    b++;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
}
