#include <stdio.h>
int main(void);
int main(void)
{
    FILE *fpFile;
    short sData;
    fpFile=fopen("DataFile.dat","r");
    fscanf(fpFile,"%4hd",&sData);
    printf("Read Data =%hd\n",sData);
    fclose(fpFile);
    return(0);

}
