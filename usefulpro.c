#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void);
int shuffle(int ,int d[]);

struct sekigae{	// �\���̂̐錾
	int no;
	char name[20];
};

int main(void)
{
	int x;

	struct sekigae seito1, seito2[20];	// �\���̕ϐ��ƍ\���̔z��̐錾

	//�\���̕ϐ��� scanf()�Ńf�[�^�����
	printf("no:\n");
	scanf("%d", &seito1.no);
	printf("name:\n");
	scanf("%s", seito1.name);

	// �\���̔z��� scanf()�Ńf�[�^�����
	for(x = 0; x < 2; x++) {
        printf("no:\n");
		scanf("%d", &seito2[x].no);
        printf("name:\n");
		scanf("%s", seito2[x].name);
	}


	// ��ʏo��
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
    printf("�l��");
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
            h=rand()%f;//����ւ��ԍ�
            i=rand()%f;//����ւ��ԍ�
            j=a[h];
            a[h]=a[i];
            a[i]=j;
        }
    }

    f--;
/*    //�ȉ��\���֌W
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
*/
    return(0);
}



