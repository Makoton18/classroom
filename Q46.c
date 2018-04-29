#include<stdio.h>
int main(void);
int func(int);
int main(void)
{
    int iData;
    scanf("%d",&iData);
    printf("%d\n",func(iData));
}
int func(int iTemp)
{
    return(iTemp*iTemp);
}
