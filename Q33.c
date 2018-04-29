#include<stdio.h>
#include<math.h>

double my_log1plus(double);
int main(void);
double my_n(double x, int n);

int main()
{
    double x;
    double ret1,ret2;

    printf("’l‚Ì“ü—Í="); scanf("%lf",&x);
    ret1=log(1+x);
    ret2=my_log1plus(x);

    printf("•W€ŠÖ” log(1+%lf)=%lf\n",x,ret1);
    printf("©ìŠÖ” my_log1plus(1+%lf)=%lf\n",x,ret2);

    return(0);
}
//x‚Ìnæ‚ğŒvZ‚·‚éŠÖ”
double my_n(double x, int n)
{
  int i;
  double sum = 1;

  if(n == 0)
    return 1;
  else
    {
      for(i = 0;i < n;i++)
	{
	  sum *= x;

	}
      return sum;
    }
}

double my_log1plus(double x)
{
  int i;
  double  y1, y2;

  y1 = 0;
  y2 = 0;
  for(i = 1;i <= 10000 ;i++)
    {
      if(i % 2 == 1)
	y1 += my_n(x, i) / i;
      else

	y2 += my_n(x, i) / i;

        if(y1==0.0000000000012|y1==0.0000000000012){
            break;
        }
    }

  return y1-y2;
}


