#include <stdio.h>

int main(void){

    char a[]="I am very hungry";
    int i=0;

    printf("文字列 = %s\n", a);
    while(a[i] != '\0'){
        switch(a[i]){
            case 'a':
                a[i] = 'b';
                break;
            case 'v':
            case 'h':
                a[i] = 'w';
                break;
            case 'y':
                a[i] = 'z';
                break;
            default:
                a[i] = '*';
        }
        i++;
    }
    printf("文字数 = %d\n", i);
    printf("文字列 = %s\n", a);

    return 0;
}
