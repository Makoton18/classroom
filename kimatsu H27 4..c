#include<stdio.h>
int main(void);

int main(void)
{
    FILE *fp;
    if((fp=fopen("Name.dat","w"))==NULL)
    {
     printf("FILE NOT WRITTEN\n");
     return(-1);
    }
    fprintf(fp,"MAKOTO");
    fclose(fp);
    return(0);
}

