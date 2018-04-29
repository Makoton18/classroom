#include <stdio.h>

main()
{
    double height,weight;
    double bmi;

    printf("êgí∑[cm]="); scanf("%lf",&height);
    height /= 100.0;
    printf("ëÃèd[kg]="); scanf("%lf",&weight);


    bmi = weight/(height*height);

    if(bmi < 19.8){
        printf("ëâÇπ\n");
    }else{
            if (19.8 <= bmi && bmi < 24.2){
        printf("ïÅí \n");
    }else{
            if(24.2 <= bmi && bmi <26.4){
        printf("Ç‚Ç‚îÏñû\n");
            }else{
                if(26.4 <= bmi){
        printf("îÏñû\n");
                }
            }
    }

    }
}
