#include <stdio.h>
#include <math.h>

int main(void);

double my_sin(double);

int main(void)
{
    double x,y1,y2;

    printf("”’l“ü—Í="); scanf("%lf",&x);
    y1 = sin(x);
    y2 = my_sin(x);

    printf("‘g‚İ‚İ: sin(%lf)=%lf, ©ì: my_sin(%lf)=%lf\n",x,y1,x,y2);
    return(0);
}
double my_sin(double x)
{
     int i;
     double bunshi,bunbo,sum,flag;
     flag=1.0;
     sum=0.0;
     bunshi=1.0;
     bunbo=1.0;
     for(i=1;i<40;i++){
        bunshi *= x;
        bunbo *= (double)i;
        if(i%2){
        sum += flag * bunshi/bunbo;
        flag *= -1.0;
        }
     }
     return(sum);
}
