#include<stdio.h>
struct Complex{
    double re;
    double im;
};

typedef struct Complex complex;

int main(void);
complex csub(complex, complex);

int main(void)
{
    complex a,b,c;

    printf("a.��������="); scanf("%lf",&a.re);
    printf("a.��������="); scanf("%lf",&a.im);
    printf("b.��������="); scanf("%lf",&b.re);
    printf("b.��������="); scanf("%lf",&b.im);

    c= csub(a,b);
    printf("add value (real part)=%g\n",c.re);
    printf("add value (imaginary part)=%g\n",c.im);


    return(0);
}

complex csub(complex a,complex b)
{
    complex c;
    c.re = a.re - b.re;
    c.im = a.im - b.im;
    return(c);
}
