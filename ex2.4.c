#include<stdio.h>

main()
{
    double box[10];
    double *ptr;

    box[0]=0.0; box[1]=0.1; box[2]=0.2; box[3]=0.3; box[4]=0.4;

    printf("boxのアドレス=%x\n",box);
    printf("box[0]のアドレス=%x\n",&box[0]);
    ptr=box+3;
    printf("ptrのアドレス=%x\n",ptr);
    printf("box+3の内容:*ptr=%g\n",*ptr);
}
