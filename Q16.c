
#include <stdio.h>
    int main()
{
    int i,sum = 1;

    i=1;
    while(i<=19)
    {
    sum *= i;
    i=i+2;
    }
        printf("sum = %d\n",sum);
    return 0;
}

