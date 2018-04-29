#include<stdio.h>
int main (void);
int tetrahedron(double ,double *,double *);
int main(void)
{
    double r,s=0,v=0;
    printf("”¼Œa"); scanf("%lf",&r);
    if(tetrahedron(r,&s,&v)<0)
    {
        printf("ƒGƒ‰[\n");
        return(-1);
    }
    printf("•\–ÊÏ%lf\n",s);
    printf("‘ÌÏ%lf\n",v);
}

int tetrahedron(double r,double *s,double *v)
{
    if(r<0)
    {
        return(-1);
    }
    *s=r*r*3.14*4;
    *v=(4/3)*3.14*r*r*r;
    return(0);
}
