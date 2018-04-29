#include <stdio.h>
int main(void);
double sesshikashi(double);

int main(void)
{
    double i;
    char szSK[100];
    FILE *fpFile;
    fpFile=fopen("SESSHI-KASHI.DAT","w");
    for(i=-20;i<=50;i++){
        printf("%lf\n",i);
        printf("%lf\n",sesshikashi(i));
        fprintf(fpFile,"%lf\n",i);
        fprintf(fpFile,"%lf\n",sesshikashi(i));
    }

    printf("Written data\n");
    fclose(fpFile);
    return(0);
}

double sesshikashi(double f)
{
    double j;
    j=(9.0*f/5.0)+32.0;
    return(j);
}
