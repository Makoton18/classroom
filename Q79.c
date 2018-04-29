#include<stdio.h>
int main(void);
int main(void)
{
    FILE *fpFile;
    char szStr[50];

    if((fpFile=fopen("Name.dat","r"))==NULL){
        printf("File not open\n");
        return(-1);
    }
    fscanf(fpFile,"%s",szStr);
    printf("Read data=%s\n",szStr);
    fclose(fpFile);

    if((fpFile=fopen("MyName.dat","w"))==NULL){
        printf("File not open\n");
        return(-1);
    }
    fprintf(fpFile,"%s",szStr);
    printf("Written data\n");
    fclose(fpFile);
}
