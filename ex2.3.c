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

    printf("box�̃A�h���X=%d\n",box);
    printf("box[0]�̃A�h���X=%d\n",&box[0]);
    ptr=box+3;
    printf("ptr�̃A�h���X=%d\n",ptr);
    printf("box+3�̓��e:*ptr=%c\n",*ptr);
}
