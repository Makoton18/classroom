#include<stdio.h>

main()
{
    int num;

    printf("input integer ");
    scanf("%d",&num);
    if(num<0){
        num*=-1;
    }
    printf("abs=%d\n",num);
    if(num % 2){
        printf("0dd number\n");
    }else{
        printf("even number\n");
    }
}
