#include <stdio.h>

int main(void){

    char a[]="I am very hungry";
    int i=0;

    printf("������ = %s\n", a);
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
    printf("������ = %d\n", i);
    printf("������ = %s\n", a);

    return 0;
}
