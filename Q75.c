#include <stdio.h>
#define MAX_BUF 512

int main(void)
{
    char filename1[80],filename2[80];
    unsigned int i;
    char buff[MAX_BUF];
    FILE *fp1,*fp2;

    printf("\n\n");
    printf("TYPE File-name1 : ");
    scanf("%s",filename1);
    printf("TYPE File-name2 : ");
    scanf("%s",filename2);
    printf("\n\n");

    if((fp2=fopen(filename2,"w"))==NULL){
         printf("File not open\n");
        return(-1);
    }
    if((fp1=fopen(filename1,"r"))==NULL){
        printf("\a\a\a\n");
        printf("Error:Cannot open file:%s\n",filename1);
        return(-1);
    }
    while(1){
        if(fgets(buff,MAX_BUF-1,fp1)==NULL){
            break;
        }
        fprintf(fp2,buff);
    }
    printf("Written data\n");
    fclose(fp2);
    fclose(fp1);
    return(0);
}
