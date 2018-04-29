#include<stdio.h>
int main(void);
int main(void)
{
    int i;
    FILE *fpFile;
    if((fpFile=fopen("kFILE.DAT","w"))==NULL){
        printf("File not open\n");
        return(-1);
    }
    for(i=1;i<=10;i++){
        printf("%d\n",i);
        fprintf(fpFile,"%d\n",i);
    }

    printf("Written data\n");
    fclose(fpFile);
    return(0);
}
