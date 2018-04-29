#include<stdio.h>
struct Complex{
    double re;
    double im;
};

typedef struct Complex complex;

int main(void);
complex cmul(complex, complex);

int main(void)
{
    complex a,b,c;

    printf("a.実数部分="); scanf("%lf",&a.re);
    printf("a.虚数部分="); scanf("%lf",&a.im);
    printf("b.実数部分="); scanf("%lf",&b.re);
    printf("b.虚数部分="); scanf("%lf",&b.im);

    c= cmul(a,b);
    printf("add value (real part)=%g\n",c.re);
    printf("add value (imaginary part)=%g\n",c.im);


    return(0);
}

complex cmul(complex a,complex b)
{
    complex c;
    c.re = a.re * b.re;
    c.im = a.im * b.im;
    return(c);
}
