#include <stdio.h>
#define IN 1 //�P��̒�
#define OUT 0 //�P��̊O
//���͒��̍s�A�P��A�����̃J�E���g
main()
{
  int moji,nline,nword,ncharacter,state;//�����̒�`

  state=OUT;//OUT��state�ɑ��
  nline = nword = ncharacter = 0;//���g��0��
  while ((moji= getchar()) != EOF) {//�L�[�{�[�h���當��������EOF�܂œ��͂���
    ++ncharacter;//ncharacter�ɂP������
    if (moji == '\n')//�������s������
        ++nline;//nline�ɂP������
    if (moji == ' ' || moji == '\n' || moji == '\t')//����NULL�����s�������^�u��������
        state = OUT;//OUT��state
    else if (state == OUT){//�܂��A����OUT��state�̂Ƃ�
        state = IN;//IN��state�ɑ��
        ++nword;//nword��1������
    }
  }
  printf("nline=%d,nword=%d,ncharacter=%d\n",nline,nword,ncharacter);
//nline,nword,ncharacte����\��
}
