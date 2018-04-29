#include<stdio.h>
double SessiToKasi(double c);

double SessiToKasi(double c)
{
    double f;
    f = (9.0/5.0)*c + 32.0;
    return(f);
}

int main(void)
{
    double c,f;
    for(c=20.0;c<=50.0;c +=1.0)
    {
        f=SessiToKasi(c);
    printf("Sessi=%lf\t Kasi=%lf\n",c,f);
    }
    return(0);
}
