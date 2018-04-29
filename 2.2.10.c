#include<stdio.h>

int main()
{
    FILE *fp;
    char *fname = "tani.txt";
    char szStr[100];
    int c;

    int a;

    fp = fopen( fname, "r" );
    if( fp == NULL ){
        printf( "%sファイルが開けません¥n", fname );
        return -1;
    }

    while( (c = fgetc( fp )) != EOF ){
        printf( "%c", c );
    }

    printf("\n\nnumber=");scanf("%c",&a);

    int d,K;
    switch(a){
        case '1':
            printf("do="); scanf("%d",&d);
            K=d+273.15;
            printf("%d K",K);
            break;
        case '2': printf("K --> do"); break;
        case '3': printf("mi --> km"); break;
        case '4': printf("km --> mi"); break;
        default: break;
    }
}
