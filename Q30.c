#include <stdio.h>
#include <math.h>

int main(void);

double my_exp(double);

int main(void)
{
    double x,y1,y2;

    printf("”’l“ü—Í="); scanf("%lf",&x);
    y1 = exp(x);
    y2 = my_exp(x);

    printf("‘g‚İ‚İ: exp(%lf)=%lf, ©ì: my_exp(%lf)=%lf\n",x,y1,x,y2);
    return(0);
}
double my_exp(double x)
{
     int i;
     double bunshi,bunbo,sum;

     sum=1.0;
     bunshi=1.0;
     bunbo=1.0;
     for(i=1;i<20;i++){
        bunshi *= x;
        bunbo *= (double)i;
        sum += bunshi/bunbo;
     }
     return(sum);
}
