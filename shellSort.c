#include<stdio.h>
#define N 9
void shell_sort(int d[],int top,int end)
{
    int i,j,k,tmp,gap;

    for(gap=(end-top+1)/2;gap>0;gap/=2){
        for(k=0;k<gap;k++){
            for(i=top+k+gap;i<=end;i+=gap){
                tmp=d[i];
                for(j=i-gap;j>=k;j-=gap){
                    if(d[j]>tmp) d[j+gap]=d[j];
                    else break;
                }
                d[j+gap]=tmp;
            }
        }
    }
}

int main(void)
{
    int i;
    int d[N]={60,20,10,40,50,30,80,90};

    shell_sort(d,0,N-1);
    for(i=0;i<N;i++){
        printf("%d",d[i]);
    }
    printf("\n");
    return(0);
}
