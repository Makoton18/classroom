#include<stdio.h>
void main(void);
void main(void){
    FILE *fpFile;

    if((fpFile=fopen("NAME.DAT","w"))==NULL){
        printf("File not open\n");
        return(-1);
    }
    fprintf(fpFile,"%s","NAKAMURA");
    fclose(fpFile);
    printf("�t�@�C���ɏ������݂܂���");
    return(0);
}
