#include<stdio.h>

int main()
{
    int cnt,sum,dat;
    double avr;

    for(sum=cnt=0; cnt<10; cnt++){
        printf("data %d input ",cnt);
        scanf("%d",&dat);
        sum+=dat;
    }
    printf("\n");
    printf("total of data = %d\n ",sum);
    avr=(double)sum/cnt;
    printf("average of data = %f\n",avr);
    return(0);
}
