#include<stdio.h>
struct Complex{
    double re;
    double im;
};

typedef struct Complex complex;

int main(void);
complex cdiv(complex, complex);

int main(void)
{
    complex a,b,c;

    printf("a.À”•”•ª="); scanf("%lf",&a.re);
    printf("a.‹•”•”•ª="); scanf("%lf",&a.im);
    printf("b.À”•”•ª="); scanf("%lf",&b.re);
    printf("b.‹•”•”•ª="); scanf("%lf",&b.im);

    c= cdiv(a,b);
    printf("add value (real part)=%g\n",c.re);
    printf("add value (imaginary part)=%g\n",c.im);


    return(0);
}

complex cdiv(complex a,complex b)
{
    complex c;
    c.re = a.re / b.re;
    c.im = a.im / b.im;
    return(c);
}
