#include<stdio.h>
void main();

void main()
{
    FILE *fpRead;
    FILE *fpWrite;
    char szFileName[10],chTemp;

    printf("既存のファイル名を入力してください\n"); scanf("%s",szFileName);
    if((fpRead=fopen(szFileName,"r"))==NULL){
        printf("Read File not open\n");
    }else{
    printf("新規のファイル名を入力してください\n"); scanf("%s",szFileName);
        if((fpWrite=fopen(szFileName,"w"))==NULL){
            printf("Write File not open\n");
    }else{
        while(fscanf(fpRead,"%c",&chTemp)==!EOF)
            {
        if(!(chTemp<'A'||'z'<chTemp)){chTemp+=0x20;}
        else{chTemp-=0x20;}
            }
    fprintf(fpWrite,"%c",chTemp);
        }
    fclose(fpWrite);
    printf("変換しました\n");
        }

    fclose(fpRead);
    }


