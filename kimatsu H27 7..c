#include<stdio.h>
struct complex{
    double re;
    double im;
};
struct complex csub(struct complex,struct complex);
struct complex cdiv(struct complex,struct complex);

int main(void);

int main(void)
{
    struct complex ac,bc,cc,dc;
    printf("•¡‘f”ac‚Ì“ü—Í[À•”,‹••”]");
    scanf("%lf,%lf",&ac.re,&ac.im);
    printf("•¡‘f”bc‚Ì“ü—Í[À•”,‹••”]");
    scanf("%lf,%lf",&bc.re,&bc.im);

    cc=csub(ac,bc);
    dc=cdiv(ac,bc);

    printf("ac-bc=[%lf‚È%lf]\n",cc.re,cc.im);
    printf("ac€bc=[%lf‚È%lf]\n",dc.re,dc.im);
    return(0);
}

struct complex csub(struct complex ac,struct complex bc)
{
    struct complex rc;
    rc.re=ac.re-bc.re;
    rc.im=ac.im-bc.im;
    return(rc);
}

struct complex cdiv(struct complex ac,struct complex bc)
{
    struct complex rc;
    rc.re=(ac.re*bc.re+ac.im*bc.im)/(bc.re*bc.re+bc.im*bc.im);
    rc.im=(ac.im*bc.re-ac.re*bc.im)/(bc.re*bc.re+bc.im*bc.im);
    return(rc);
}
