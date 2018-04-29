
#include <stdio.h>

double maxof(double z[], int n)
{
    int i;
    double max;
    max = z[0];
    for(i=1 ; i<n ; i++){
            if(max<z[i]){
                    max=z[i];
        }
    }
    return(max);
}


int main(void)
{
    double  max;
/*  double  min,max,product,heikin,bunsan,hensa;*/
    double  x[5];
    int     i;
    int     nx=sizeof(x)/sizeof(x[0]);          /*xの要素数*/

    for (i=0;i<nx;i++){
            printf("x[%d]:",i);
            scanf("%lf",&x[i]);
}
/*
min=minof(x,nx);
max=maxof(x,nx);
product=productup(x,nx);
heikin=average(x,nx);
bunsan=variance(x,nx);
hensa=stddeviation(x,nx);
*/
    max=maxof(x,nx);

    printf("MAX=%.1f\n",max);
    return(0);
}
