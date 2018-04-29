#include<stdio.h>
int main(void);

int main(void)
{
    FILE *fp;
    char szStr[100];
    if((fp=fopen("Name.dat","r"))==NULL)
    {
        printf("File Not Read");
        return(-1);
    }
    fscanf(fp,"%s",szStr);
    printf("Read Data=%s\n",szStr);
    return(0);
}
