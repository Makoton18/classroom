#include<stdio.h>
int main(void);

struct Date{
    short sDay;
    short sMonth;
    short sYear;
};

    struct item{
    char szName[10];
    short sAge;
    struct Date birth;
};

int main(void)
{
    struct item meibo;
    struct item *pmeibo;

    pmeibo=&meibo;
    printf("name?"); scanf("%s",meibo.szName);
    printf("age?"); scanf("%hd",&meibo.sAge);
    printf("year?"); scanf("%hd",&meibo.birth.sYear);
    printf("month?"); scanf("%hd",&meibo.birth.sMonth);
    printf("day?"); scanf("%hd",&meibo.birth.sDay);

    pmeibo=&meibo;
    printf("name=%s\n",meibo.szName);
    printf("age=%hd\n",meibo.sAge);
    printf("year=%hd\n",meibo.birth.sYear);
    printf("month=%hd\n",meibo.birth.sMonth);
    printf("day=%hd\n",meibo.birth.sDay);
    return(0);
}
