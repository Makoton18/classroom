#include<stdio.h>
#include<math.h>

double my_cos(double);
int main(void);

int main()
{
    double x;
    double ret1,ret2;

    printf("”’l‚Ì“ü—Í="); scanf("%lf",&x);
    ret1=cos(x);
    ret2=my_cos(x);

    printf("‘g‚İ‚İ:cos(%lg)=%lg\n",x,ret1);
    printf("©ì:my_cos(%lg)=%lg\n",x,ret2);

    return(0);
}

double kaijyo(int n)
{
    double j=1.0;

    while(n){
        j *= (double)n;
        n--;
    }
    return(j);
}

double my_cos(double x)
{
    double bunshi,bunbo,fugo;
    int i;
    double sum;

    bunshi=1.0;
    bunbo=1.0;
    sum=1.0;

    for(i=1;i<20;i++){
        bunshi*=(x*x);
        bunbo=kaijyo(2*i);
        if(i%2){
            fugo=-1.0;
        }else{
            fugo=1.0;
        }
        sum+=fugo*(bunshi/bunbo);

        if(bunshi/bunbo==0.0000000000012){
            break;
        }
    }
    return(sum);

}
