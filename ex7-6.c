#include<stdio.h>
int main();
void calcv(short,short,short);
void calcp(short,short*,short*);

int main()
{
    short sData1=0,sData2=100,sData3=100;

    printf("sData1="); scanf("%hd",&sData1);
    calcv(sData1,sData2,sData3);
    printf("calcv:sData1=%hd sData2=%hd sData=3=%hd\n",sData1,sData2,sData3);
    calcp(sData1,&sData2,&sData3);
    printf("calcp:sData1=%hd sData2=%hd sData=3=%hd\n",sData1,sData2,sData3);
}

void calcv(short sData1,short sData2,short sData3)
{
    sData2=sData1*2;
    sData3=sData1/2;
}

void calcp(short s1,short *ps2,short *ps3)
{
    *ps2=s1*2;
    *ps3=s1/2;
}
