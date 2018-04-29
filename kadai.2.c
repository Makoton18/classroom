#include<stdio.h>
int main(void);
int main(void)
{
    FILE *fpFile;
    char szStr[50];
    int i;
    if((fpFile = fopen("kFILE.DAT","r"))==NULL){
        printf("File not open\n");
        return(-1);
    }
    for(i=1;i<=10;i++){
    fscanf(fpFile,"%s",szStr);
    printf("Read data =%s\n",szStr);
    }

    fclose(fpFile);
    return(0);
}
