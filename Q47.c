#include<stdio.h>
int main(void);
void func(int*);
int main(void)
{
    int iData;
    scanf("%d",&iData);
    func(&iData);
    printf("%d\n",iData);
}

void func(int *iTemp)
{
    *iTemp=(*iTemp)*(*iTemp);
}
