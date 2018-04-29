#include<stdio.h>
void main()
{
    FILE *fpRead;
    FILE *fpWrite;
    char szFileName[10],chTemp;
    short sCount=0,sFlag=0;

    printf("ƒtƒ@ƒCƒ‹–¼="); scanf("%s",szFileName);
    if((fpRead=fopen(szFileName,"r"))==NULL){
        printf("Read file not open\n");
    }else{
        while(*(szFileName+sCount)){sCount++;}
        *(szFileName+sCount)='c';
        *(szFileName+sCount+1)='\0';
        if((fpWrite=fopen(szFileName,"w"))==NULL)
            {printf("Write file not open");}
        else{
            while(fscanf(fpRead,"%c",&chTemp)!=EOF)
            {
                if(chTemp==' '||chTemp=='\t')
                {
                    if(sFlag==1)
                    {
                        sFlag=0;
                        fprintf(fpWrite,"%c",' ');
                    }
                }
                else{
                sFlag=1;
                fprintf(fpWrite,"%c",chTemp);
                }
            }
        fclose(fpRead);
        }
    }
}
