#include<stdio.h>

main()
{
    char a;
    int b;
    float c;
    double d;

    a = 12;
    b = 24;
    a = 1000; //�ł��Ȃ��@char��128�܂�
    c = 1.0f; // float �͐ڔ���f������K�v
    d = 1.0; //double �͕K�v�Ȃ�

    printf("�e�X�g�v���O����\n");
    printf("�e�X�g�v���O����\r");
    printf("�e�X�g�v���O����\b");
}
