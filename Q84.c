#include<stdio.h>
void main()
{
    FILE *fpOld;
    FILE *fpNew;
    char szFileNew[10],chTemp;
    char szFileOld1[10];
    char szFileOld2[10];

    printf("�����t�@�C����1="); scanf("%s",szFileNew);
    printf("�����t�@�C����2="); scanf("%s",szFileOld1);
    printf("�V�K�t�@�C����="); scanf("%s",szFileOld2);

    if((fpNew=fopen(szFileNew,"w"))==NULL)
    {
        printf("New File not open");
    }else{
    if((fpOld=fopen(szFileOld1,"r"))==NULL)
    {
        printf("Old1 File not open\n");

    }else{
        while(fscanf(fpOld,"%c",&chTemp)!=EOF)
        {
            fprintf(fpNew,"%c",&chTemp);
        }
        fclose(fpOld);
        printf("1�߂𕡎ʂ��܂���");
    }

    if((fpOld=fopen(szFileOld2,"r"))==NULL)
    {
        printf("Old2 file not open\n");
    }else{
        while(fscanf(fpOld,"%c",&chTemp)!=EOF)
        {
            fprintf(fpNew,"%c",chTemp);
        }
        fclose(fpOld);
        printf("2�߂𕡎ʂ��܂���\n");
    }
    fclose(fpNew);
    }
}
