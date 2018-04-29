#include<stdio.h>
int main(void);
int main(void)
{
    int a,b,c;
    a=12;
    b=15;
    c=50;
    b = b/c;
    if(a&&b&&c){
        c++;
    }else if(a&&b||c){
        c--;
    }else{
    c/=2;
    }
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
}
