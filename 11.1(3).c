#include <stdio.h>
int main(void);
int main(void)
{
    FILE *fpFile;
    short sCount;
    fpFile=fopen("DataFile.dat","w");
    for(sCount=0;sCount<100;sCount++){
        fprintf(fpFile,"%4hd",sCount);
    }
        fclose(fpFile);
        return(0);

}
