#include<stdio.h>
#include<stdlib.h>
int main(void);

/*1回目（あまり良い出来ではなかったので新しく作った）
int shuffle(int ,int d[]);

struct sekigae{	// 構造体の宣言
	int no;
	char name[20];
};

int main(void)
{
	int x;

	struct sekigae seito1, seito2[20];	// 構造体変数と構造体配列の宣言

	//構造体変数に scanf()でデータを入力
	printf("no:\n");
	scanf("%d", &seito1.no);
	printf("name:\n");
	scanf("%s", seito1.name);

	// 構造体配列に scanf()でデータを入力
	for(x = 0; x < 2; x++) {
        printf("no:\n");
		scanf("%d", &seito2[x].no);
        printf("name:\n");
		scanf("%s", seito2[x].name);
	}


	// 画面出力
	printf("no:%d name:%s\n", seito1.no, seito1.name);
	for(x = 0; x < 2; x++) {
		printf("no:%d name:%s\n",seito2[x].no, seito2[x].name);
	}


	return(0);
}

int shuffle(int seito.no1,int seito.no2[])
{
    int a[100];
    int b[100];
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int t,y;
    int yy[50];
    int l,m;
    int o;
    l=0;
    m=0;
    d=1;
    printf("人数");
    scanf("%d",&c);
    o=y;
    e=c;
    f=c;
    m=c;
    c--;
    for(;c>=0;c--)
    {
        a[c]=d;
        d++;
    }
    int p;

    for(;p>=0;p--)
    {

        for(;g>0;g--)
        {
            h=rand()%f;//入れ替え番号
            i=rand()%f;//入れ替え番号
            j=a[h];
            a[h]=a[i];
            a[i]=j;
        }
    }

    f--;
    //以下表示関係
    for(;f>=0;f--)
    {
        printf("%d ",a[f]);
        if(f==31)
        {   printf("\n\n");
        }
        if(f==25)
        {   printf("\n\n");
        }
        if(f==19)
        {   printf("\n\n");
        }
        if(f==13)
        {   printf("\n\n");
        }
        if(f==7)
        {   printf("\n\n   ");
        }
        if(f==3)
        {   printf("\n\n   ");
        }

    }
    printf("\n\n");

    return(0);
}
*/


//改造版
int main(void)
{
    int i, num_of_people;

    printf("人数: "); scanf("%d", &num_of_people);

    int data[num_of_people];
    int j,t;
    for(i=0; i<num_of_people; i++){
        data[i] = i;

    }
    for(i=0; i<num_of_people; i++){
        j = rand()%num_of_people;
        t = data[i];
        data[i] = data[j];
        data[j] = t;
    }
    for(i=0; i<num_of_people; i++){
        if(!(i%6)){
            printf("\n");
        }
        printf("%d\t",data[i]);
    }

}
