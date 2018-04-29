#include<stdio.h>
int main(void);

int main(void)
{
    int i,j;
    FILE *fp;
    if((fp=fopen("kuku-table.dat","wt"))==NULL)
    {
        printf("Not written");
        return(-1);
    }
    for(i=1;i<10;i++){
        for(j=1;j<9;j++)
        {
            fprintf(fp,"%4d,",i*j);
        }
        fprintf(fp,"%4d\n",i*j);
    }
    fclose(fp);
    return(0);
}
