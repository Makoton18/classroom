#include<stdio.h>

int main(){
    char *src1="ê©";
    char *src2="ñº";
    char dst[80];
    char *p,*q;

    p =src1;
    q= dst;
    while(*q++ = *p++);
    q--;
    p=src2;
    while(*q++ = *p++);

    printf("ê©ñº=%s\n",dst);

    return(0);
}
