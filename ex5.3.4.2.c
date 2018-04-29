#include<stdio.h>
#include<math.h>

int solvsecondequ(double,double,double,double*,double*);
int solvsecondequ(double da,double db,double dc,double *dpx1,double *dpx2)
{
    double rt;

    rt=db*db-4.0*da*dc;
    if(rt<0.0){
        rt*=-1.0;
        *dpx1=-1.0*db/(2.0*da);
        *dpx2=sqrt(rt)/(2.0*da);
        return(-1);
    }
    if(rt==0.0){
        *dpx1=*dpx2=-db/(2.0*da);
        return(0);
    }
    *dpx1=(-db+sqrt(rt))/(2.0*da);
    *dpx2=(-db-sqrt(rt))/(2.0*da);
    return(1);
}

int main(void)
{
    int ret;
    double a,b,c,x1,x2;

    printf("Ax^2+Bx+C=0\n");
    printf("A="); scanf("%lf",&a);
    printf("B="); scanf("%lf",&b);
    printf("C="); scanf("%lf",&c);
    printf("\n•û’öŽ®‚Í%lgx^2+%lgx+%lg=0‚Å‚·B\n",a,b,c);
    ret=solvsecondequ(a,b,c,&x1,&x2);
    switch(ret){
    case -1:
        printf("‰ð%lg}j%lg\n",x1,x2);
        break;
    case 0:
        printf("dª=%lg\n",x1);
        break;
    case 1:
        printf("ª1=%lg,ª2=%lg\n",x1,x2);
        break;
    }
    return(0);
}
