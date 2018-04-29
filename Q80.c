#include<stdio.h>
int main(void);
int main(void)
{
    FILE *fpFile;
    char szStr[50];
    char FileName[50];
    int i;

    printf("ƒtƒ@ƒCƒ‹–¼‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    scanf("%s",FileName);

    if((fpFile=fopen(FileName,"r"))==NULL){
        printf("File not open\n");
        return(-1);
    }

    fscanf(fpFile,"%s",&szStr);
    printf("Read data=%s\n",szStr);
    fclose(fpFile);


    for(i=0;szStr[i]!='\0';i++);
    printf("•¶š”%d",i);
    return(0);
}
