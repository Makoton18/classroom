#include<stdio.h>
#include<time.h>
#define NUM 1024
#define CNT 1000

int main(void);
void print_data(int [] ,int );
void ba_sort(int [],int ,int);

int main(void)
{
    int src[NUM];
    int dst[NUM];
    int i,j;
    long start_time,end_time;

    for(i=0;i<NUM;i++){
        src[i]=(int)rand();
    }
    start_time =clock();
    for(j=0;j<CNT;j++){
        memcpy(dst, src,NUM*sizeof(int));
        ba_sort(dst,0,NUM);
    }
    end_time =clock();
    printf("%d‰ñ‚Ìˆ—ŽžŠÔ=%f[s]\n",CNT,(double)(end_time-start_time)/CLOCKS_PER_SEC);
}

void print_data(int d[],int n)
{
    int i;
    for(i=0;i < n;i++){
        printf("d[%d]=%d\n",i,d[i]);
    }
}

void ba_sort(int d[],int top,int end)
{
    int i,j,wk;
    for(i=top;i<end;i++){
        for(j=i+1;j<=end;j++){
            if(d[i]>d[j]){
                wk=d[i];
                d[i]=d[j] ;
                d[j]=wk;
            }
        }
    }
}
