#include<stdio.h>
#define N 9
void insert_sort(int d[],int top,int end)
{
    int i,j,tmp;

    for(i=top+1;i<=end;i++)
    {
        tmp=d[i];
        for(j=i-1;j>=top;j--)
        {
            if(d[j]>tmp) d[j+1]=d[j];
            else break;
        }
        d[j+1]=tmp;
    }
}

int main(void)
{
    int i;
    int d[N]={60,20,10,40,50,30,80,90};

    insert_sort(d,0,N-1);
    for(i=0;i<N;i++){
        printf("%d",d[i]);
    }
    printf("\n");
    return(0);
}
