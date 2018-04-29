#include<stdio.h>

main()
{
    char a;
    int b;
    float c;
    double d;

    a = 12;
    b = 24;
    a = 1000; //できない　charは128まで
    c = 1.0f; // float は接尾語fをつける必要
    d = 1.0; //double は必要なし

    printf("テストプログラム\n");
    printf("テストプログラム\r");
    printf("テストプログラム\b");
}
