#include<stdio.h>
main()
{
    int i;
    printf("数値の入力=");
    scanf("%d", &i);
    switch(i){
    case 1:printf("変数iの値は1です");
    break;
    case 2:printf("変数iの値は2か5です");
    break;
    case 5:printf("変数iの値は2か5です");
    break;
    default :printf("変数iは1,2,5以外です");
    }

}
