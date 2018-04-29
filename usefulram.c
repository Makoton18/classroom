#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LENG 3

int main(void);
int shuffle(void);

struct sekigae{	// 構造体の宣言
	int no;
	char name[20];
};

int main(void)
{
	int i;
    int j, tmp, r, ary[LENG];
    srand( (unsigned)time(NULL) );

	struct sekigae seito1, seito2[20];	// 構造体変数と構造体配列の宣言

	//構造体変数に scanf()でデータを入力
	printf("no:\n");
	scanf("%d", &seito1.no);
	printf("name:\n");
	scanf("%s", seito1.name);

	// 構造体配列に scanf()でデータを入力
	for(i = 0; i < 2; i++) {
        printf("no:\n");
		scanf("%d", &seito2[i].no);
        printf("name:\n");
		scanf("%s", seito2[i].name);
	}

    for ( j=0;  j<LENG-1; j++ ) {
        r = rand() % (LENG-j) + j;
        tmp = ary[j];
        ary[j] = ary[r];
        ary[r] = tmp;
    }
	// 画面出力
	printf("no:%d name:%s\n", seito1.no, seito1.name);
	for(i = 0; i < 2; i++) {
		printf("no:%d name:%s\n",seito2[i].no, seito2[i].name);
	}

    printf("シャッフル後\n");
    for( j=0; j<LENG; j++ ){
        printf("%2d ",ary[j]);
    }
    printf("\n");
    system( "pause" );

	return(0);
}
