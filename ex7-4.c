#include<stdio.h>

int main(){
    char *src1="��";
    char *src2="��";
    char dst[80];
    char *p,*q;

    p =src1;
    q= dst;
    while(*q++ = *p++);
    q--;
    p=src2;
    while(*q++ = *p++);

    printf("����=%s\n",dst);

    return(0);
}
