#include<stdio.h>

char name[]="SUZUKI Ichiro";
int main(void),funcl(void),func2(void);

int main(void)
{
    char name[]="YAMADA Taro";

    printf("\tLocal - %s\n",name);
    func1();
    func2();
}

int func1(void)
{
    printf("Global-%s\n",name);
    {
        char name[]="NAGASHIMA Shigeo";
        {
            char name[]="NAKATA HIDETOSHI";
            printf("\t\t\tLocal-%s\n",name);
        }
    }
    return(0);
}

int func2(void)
{
    char name[]="MAEDA Toshiie";

    printf("\tLocal-%s\n",name);
    return(0);
}
