#include<stdio.h>

main()
{
    int num;

    printf("input integer ");
    scanf("%d",&num);
    switch(num){
        case 0:printf("ZERO ");
        case 1:printf("ONE ");
        case 2:printf("TWO ");
        case 3:printf("THREE ");
        }
}
