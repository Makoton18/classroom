#include<stdio.h>
int main(void);

int main(void)
{
    short *psData,sData=100;
    psData=&sData;
    printf("%hd\n",*psData);
}
