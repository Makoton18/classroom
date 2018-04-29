#include<stdio.h>
int main(void);

int main(void)
{
    short *psData,*sData;
    psData=&sData;
    *psData=100;
    printf("%hd\n",sData);
}
