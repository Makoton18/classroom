#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LENG 3

int main(void);
int shuffle(void);

struct sekigae{	// �\���̂̐錾
	int no;
	char name[20];
};

int main(void)
{
	int i;
    int j, tmp, r, ary[LENG];
    srand( (unsigned)time(NULL) );

	struct sekigae seito1, seito2[20];	// �\���̕ϐ��ƍ\���̔z��̐錾

	//�\���̕ϐ��� scanf()�Ńf�[�^�����
	printf("no:\n");
	scanf("%d", &seito1.no);
	printf("name:\n");
	scanf("%s", seito1.name);

	// �\���̔z��� scanf()�Ńf�[�^�����
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
	// ��ʏo��
	printf("no:%d name:%s\n", seito1.no, seito1.name);
	for(i = 0; i < 2; i++) {
		printf("no:%d name:%s\n",seito2[i].no, seito2[i].name);
	}

    printf("�V���b�t����\n");
    for( j=0; j<LENG; j++ ){
        printf("%2d ",ary[j]);
    }
    printf("\n");
    system( "pause" );

	return(0);
}
