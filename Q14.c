#include <stdio.h>

main()
{
    double height,weight;
    double bmi;

    printf("�g��[cm]="); scanf("%lf",&height);
    height /= 100.0;
    printf("�̏d[kg]="); scanf("%lf",&weight);


    bmi = weight/(height*height);

    if(bmi < 19.8){
        printf("����\n");
    }else{
            if (19.8 <= bmi && bmi < 24.2){
        printf("����\n");
    }else{
            if(24.2 <= bmi && bmi <26.4){
        printf("���얞\n");
            }else{
                if(26.4 <= bmi){
        printf("�얞\n");
                }
            }
    }

    }
}
