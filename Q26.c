#include <stdio.h>
#define MAX_BUF 512

int main(void)
{
    char filename[80];
    unsigned int i;
    char buff[MAX_BUF];
    FILE *fp;

    printf("\n\n");
    printf("TYPE File-name  :  ");
    scanf("%s",filename);
    printf("\n\n");

    printf("TYPE File : %s\n ",filename);
    if((fp = fopen(filename,"r"))==NULL){
        printf("\a\a\a\n");
        printf("Error :Cannot open file : %s\n ",filename);
        return(-1);
    }
    i=0;
    while(1){
        if(fgets(buff,MAX_BUF-1,fp)==NULL){
            break;
        }
        printf("%u:\t%s",i,buff);
        i++;
    }
    fclose(fp);
    return(0);
}
