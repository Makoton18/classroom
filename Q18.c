
#include<stdio.h>
void putstr(const char *s)
{
    int i;
      for(i=0;s[i] != '\0'; i++)
        putchar(s[i]);
}
    int i;
     unsigned int stringlength(const char *s)
    {
        unsigned int length = 0;
        for(i=0;s[i] != '\0'; i++){
            length ++;
        }
        return(length);
    }
int main(void){


    char str[1000];
    unsigned int j;
    printf(" = \n");
    scanf("%s",str);
    j = stringlength(str);
     for(i=0;str[i] != '\0'; i++){
        if('a' <= str[i] && str[i] <= 'z'){
                str[i]=str[i]-('a'-'A');
            }
        }
        putstr(str);
        putchar('\n');
            printf("’·‚³=%d\n",j);
        return 0;
}
