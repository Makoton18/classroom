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
    printf("name?"); scanf("%s",pmeibo->szName);
    printf("age?"); scanf("%hd",&pmeibo->sAge);
    printf("year?"); scanf("%hd",&pmeibo->birth.sYear);
    printf("month?"); scanf("%hd",&pmeibo->birth.sMonth);
    printf("day?"); scanf("%hd",&pmeibo->birth.sDay);

    printf("name=%s\n",pmeibo->szName);
    printf("age=%hd\n",pmeibo->sAge);
    printf("year=%hd\n",pmeibo->birth.sYear);
    printf("month=%hd\n",pmeibo->birth.sMonth);
    printf("day=%hd\n",pmeibo->birth.sDay);
    return(0);
}
