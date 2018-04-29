#include<stdio.h>
#define N 6
void sort(int *,int );
int main(void);

void sort(int *d,int n)
{
    int i,j,wk;
    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(d[i]>d[j]){
                wk=d[i];
                d[i]=d[j];
                d[j]=wk;
            }
        }
    }
}

int main(void)
{
    int i;
    int data[N]={60,0,1,7,3,9};

    sort(data,N);
    for(i=0;i<N;i++){
        printf("%d\n",data[i]);

    }
    return(0);
}
