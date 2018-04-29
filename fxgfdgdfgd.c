#include <stdio.h>
int main(void);
unsigned int gcd1(unsigned int , unsigned int);
unsigned int gcd2(unsigned int , unsigned int);

unsigned int gcd1(unsigned int a,unsigned int b)
{
    int i=1;
    while(a != b){
        printf("ŒJ‚è•Ô‚µ%d‰ñ\n",i);
        i=i+1;
        if(a>b){
            a-=b;
        }else{
        b-=a;
        }
    }
    return(a);
}

unsigned int gcd2(unsigned int c,unsigned int d)
{
    unsigned int w;
    int i=1;
    while(d!=0){
        printf("ŒJ‚è•Ô‚µ%d‰ñ\n",i);
        i=i+1;
        w=c%d;
        c=d;
        d=w;
    return(c);
}
int main(void)
{
    unsigned int a,b,c,d,g1,g2;

    printf("a="); scanf("%u",&a);
    printf("b="); scanf("%u",&b);
    printf("c="); scanf("%u",&c);
    printf("d="); scanf("%u",&d);
    g1=gcd1(a,b);
    printf("%u‚Æ%u‚ÌÅ‘åŒö–ñ”‚Í%u\n",a,b,g1);
    g2=gcd2(c,d);
    printf("%u‚Æ%u‚ÌÅ‘åŒö–ñ”‚Í%u\n",c,d,g2);
    return(0);
}
