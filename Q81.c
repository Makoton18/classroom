#include<stdio.h>
void main();

void main()
{
    FILE *fpFile;
    char szStr;
    char FileName[50];
    int i,c;

    c=0;

    printf("�t�@�C��������͂��Ă�������\n");
    scanf("%s",FileName);

    if((fpFile=fopen(FileName,"r"))==NULL){
        printf("File not open\n");
        return(-1);
    }

    while(fscanf(fpFile,"%c",&szStr)!=EOF)
    {
        switch(szStr){
        case '[': c++; break;
        case ']': c++; break;
        case '{': c++; break;
        case '}': c++; break;
        case '(': c++; break;
        case ')': c++; break;
        default: break;
        }
    }

    printf("[]{}()��%d�ł�",c);
}
