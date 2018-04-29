/*char型、int型、short int型、float型、double型の大きさ表示*/

#include<stdio.h>

int main(void)
{
    printf("char型は%uバイトです。\n",(unsigned)sizeof(char));
    printf("int型は%uバイトです。\n",(unsigned)sizeof(int));
    printf("short int型は%uバイトです。\n",(unsigned)sizeof(short int));
    printf("long型は%uバイトです。\n",(unsigned)sizeof(long));
    printf("float型は%uバイトです。\n",(unsigned)sizeof(float));
    printf("double型は%uバイトです。\n",(unsigned)sizeof(double));
    return(0);
}
