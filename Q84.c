#include<stdio.h>
void main()
{
    FILE *fpOld;
    FILE *fpNew;
    char szFileNew[10],chTemp;
    char szFileOld1[10];
    char szFileOld2[10];

    printf("既存ファイル名1="); scanf("%s",szFileNew);
    printf("既存ファイル名2="); scanf("%s",szFileOld1);
    printf("新規ファイル名="); scanf("%s",szFileOld2);

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
        printf("1つめを複写しました");
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
        printf("2つめを複写しました\n");
    }
    fclose(fpNew);
    }
}
