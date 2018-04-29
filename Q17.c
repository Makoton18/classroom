
#include<stdio.h>
#include<string.h>
void putstr(const char *s)
{
    int i;
      for(i=0;s[i] != '\0'; i++)
        putchar(s[i]);
}
int main(void){
    int i=0;
    char str[1000];
                printf(" = \n");
                scanf("%s",str);
      for(i=0;str[i] != '\0'; i++){
        if('a' <= str[i] && str[i] <= 'z'){
                str[i]=str[i]-('a'-'A');
            }
        }
        putstr(str);
        putchar('\n');
        return 0;
}

