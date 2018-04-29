#include<stdio.h>
int main(void);
int solv(double A,double B,double C,double D,double E,double F,double *px,double *py);

int main(void)
{
    double A,B,C,D,E,F,x,y;
    int ret;

    printf("Ax + By = C \n");
    printf("Dx + Ey = F \n");
    printf("A="); scanf("%lf",&A);
    printf("B="); scanf("%lf",&B);
    printf("C="); scanf("%lf",&C);
    printf("D="); scanf("%lf",&D);
    printf("E="); scanf("%lf",&E);
    printf("F="); scanf("%lf",&F);

    ret = solv(A,B,C,D,E,F,&x,&y);
    if(ret==0){
        printf("â x=%lf,y=%lf\n",x,y);
    }else{
        printf("âÇÕãÅÇﬂÇÁÇÍÇ‹ÇπÇÒÇ≈ÇµÇΩ\n");
        }
        return(0);
}

int solv(double A,double B,double C,double D,double E,double F,double *px,double *py)
{
    if(A*E-B*D==0){
            return(-1);
    }
    *px=(E*C-B*F)/(A*E-B*D);
    *py=(A*F-C*D)/(A*E-B*D);
    return(0);
}
