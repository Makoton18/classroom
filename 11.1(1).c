#include <stdio.h>
int main(void);
int main(void)
{
    FILE *fpFile;
    fpFile=fopen("DataFile.dat","w");
    printf("File Open\n");
    fclose(fpFile);
    printf("File Close\n");
    return(0);
}
