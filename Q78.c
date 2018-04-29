#include<stdio.h>
void main(void);
void main(void){
    FILE *fpFile;
    char szStr[50];
    if((fpFile = fopen("NAME.DAT","r"))==NULL){
        printf("File not open\n");
        return(-1);
       }
    fscanf(fpFile,"%s",szStr);
    printf("Read Data = %s\n",szStr);
    fclose(fpFile);
    return(0);
}
