#include<stdio.h>
int main(void);

int main()
{
    short asData[10],sCount;
    for(sCount=0; sCount<10; sCount++){
        scanf("%hd",&asData[sCount]);
        //scanf(%hd",(asData+sCount))
    }

    for(sCount=0; sCount<10; sCount++){
        printf("%hd\n",asData[sCount]);

    }
}
