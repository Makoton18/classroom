#include<stdio.h>

main()
{
    char box[5];
    char *ptr;

    box[0]='a';
    box[1]='b';
    box[2]='c';
    box[3]='d';
    box[4]='\x0';

    printf("boxのアドレス=%d\n",box);
    printf("box[0]のアドレス=%d\n",&box[0]);
    ptr=box+3;
    printf("ptrのアドレス=%d\n",ptr);
    printf("box+3の内容:*ptr=%c\n",*ptr);
}
