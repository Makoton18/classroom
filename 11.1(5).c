#include <stdio.h>
#include<stdlib.h>
int main(void);
int main(void)
{
    short *psData,*psTemp;
    short sCount;

    psData=malloc(10);
    for(sCount=0,psTemp=psData;sCount<5;sCount++,psTemp++){
        *psTemp=sCount;
    }
    for(sCount=0,psTemp=psData;sCount<5;sCount++,psTemp++){
        printf("%hd\n",*psTemp);
    }
    free(psData);
    return(0);

}
