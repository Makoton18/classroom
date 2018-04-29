#include <stdio.h>
    int print_char(char c);
void main(void);

void main(void)
{
    char address[256];
    int i;
    printf("ZŠ="); scanf("%s",address);
    for(i=0; address[i] != '\0'; i++)
        putchar(address[i]);
}

    int print_char(char c)
    {
        return(printf("%c",c));
    }
