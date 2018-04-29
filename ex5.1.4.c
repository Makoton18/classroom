#include<stdio.h>
int main(void);
int main(void)
{
    int ret;
    ret=printf("FIFA World Cup KoreaJapan 2002\n");
    if(ret>0){
        printf("Output characters = %d\n",ret);
    }else{
        printf("Error\n");
    }
}
