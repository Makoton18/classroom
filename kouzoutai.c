#include<stdio.h>
    struct personal{
    short sPhysics,sChemistry,sBiology,sGeography;
    };
    int main (void);
    void inputdata(struct personal *);
    void outputdata(struct personal);
    int main(void)
    {
        struct personal Data;
        inputdata(&Data);
        outputdata(Data);
        return(0);
    }

    void inputdata(struct personal *pData)
    {
        printf("Physics="); scanf("%hd",&pData->sPhysics);
        printf("sChemistry="); scanf("%hd",&pData->sChemistry);
        printf("sBiology="); scanf("%hd",&pData->sBiology);
        printf("sGeography="); scanf("%hd",&pData->sGeography);
    }
    void outputdata(struct personal cData)
    {
        printf("Physics=%hd\n",cData.sPhysics);
        printf("sChemistry=%hd\n",cData.sChemistry);
        printf("sBiology=%hd\n",cData.sBiology);
        printf("sGeography=%hd\n",cData.sGeography);
    }
