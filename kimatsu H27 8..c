#include<stdio.h>
#include<time.h>
/*struct tm{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
};
*/

int main(void);

int main(void)
{
    struct tm *tp;
    time_t  t;

    t=time(&t);
    tp=localtime(&t);
    printf("現在%d月%d日%d時%d分%d秒"
           ,tp->tm_mon,tp->tm_mday
           ,tp->tm_hour,tp->tm_min
           ,tp->tm_sec);
    return(0);
}
