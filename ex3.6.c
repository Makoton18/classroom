//三角形の面積を求めるプログラム

#include<stdio.h>

main()
{
    double x,h,s;

    printf("底辺の長さ="); scanf("%lg",&x);
    printf("高さ="); scanf("%lg",&h);

   s=((x*h)/2);
   printf("三角形の面積=%lg\n",s);
}
