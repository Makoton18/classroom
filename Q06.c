/*2�i���̃r�b�g�������߂�*/

#include<stdio.h>

int main(void)
{
    int x;
    int no=0;

    printf("���̐����l�F");
    scanf("%d",&x);

    while(x>0){
        x/=2;
        no++;
    }
    printf("2�i���̃r�b�g����%d�ł��B\n",no);
    return(0);
}
