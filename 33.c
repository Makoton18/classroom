#include<stdio.h>
#include<math.h>

double my_log1plus(double);
int main(void);

int main()
{
    double x;
    double ret1,ret2;

    printf("”’l‚Ì“ü—Í="); scanf("%lf",&x);
    ret1=log(1+x);
    ret2=my_log1plus(x);

    printf("‘g‚İ‚İ: log(1+%lf)=%lf\n",x,ret1);
    printf("©ì: my_log1plus(1+%lf)=%lf\n",x,ret2);

    return(0);
}


double my_log1plus(double x)
{
    double bunshi,bunbo,fugo;
    int i;
    double sum;

    bunshi=1.0;
    bunbo=1.0;
    sum=0.0;

    for(i=1;i<20;i++){
        bunshi*=x;
        bunbo=i;
        if(i){
            fugo=1.0;
        }else{
            fugo=-1.0;
        }
        sum+=fugo*(bunshi/bunbo);


        //if(bunshi/bunbo==0.000000000001)
        {
           break;
        }
    }
    return(sum);

}
