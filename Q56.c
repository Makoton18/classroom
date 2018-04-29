#include <stdio.h>

main()
{
    double height,weight;
    int bmi;

/*    printf("身長[cm]="); scanf("%lf",&height);
    height /= 100.0;
    printf("体重[kg]="); scanf("%lf",&weight);


    bmi = weight/(height*height);

    if(bmi < 19.8){
        printf("痩せ\n");
    }else{
            if (19.8 <= bmi && bmi < 24.2){
        printf("普通\n");
    }else{
            if(24.2 <= bmi && bmi <26.4){
        printf("やや肥満\n");
            }else{
                if(26.4 <= bmi){
        printf("肥満\n");
                }
            }
    }

    }*/
    printf("身長[cm]="); scanf("%lf",&height);
    height /= 100.0;
    printf("体重[kg]="); scanf("%lf",&weight);
    bmi = weight/(height*height);
    switch(bmi = weight/(height*height)){
    case 1:printf("痩せ");
    break;
    case 2:printf("普通");
    break;
    case 3:printf("やや肥満");
    break;
    case 5:printf("肥満");
    break;
    default :printf("エラー");
    }
}
