/*char�^�Aint�^�Ashort int�^�Afloat�^�Adouble�^�̑傫���\��*/

#include<stdio.h>

int main(void)
{
    printf("char�^��%u�o�C�g�ł��B\n",(unsigned)sizeof(char));
    printf("int�^��%u�o�C�g�ł��B\n",(unsigned)sizeof(int));
    printf("short int�^��%u�o�C�g�ł��B\n",(unsigned)sizeof(short int));
    printf("long�^��%u�o�C�g�ł��B\n",(unsigned)sizeof(long));
    printf("float�^��%u�o�C�g�ł��B\n",(unsigned)sizeof(float));
    printf("double�^��%u�o�C�g�ł��B\n",(unsigned)sizeof(double));
    return(0);
}
