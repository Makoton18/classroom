#include <stdio.h>
main()
{
    int moji,j,nspace,nother;//�������`
    int ndigit[10];//ndigit�̔���10�����
    nspace = nother = 0;//�Ȃ��݂�0��
    for(j=0;j<10;++j)//0����10�܂ŌJ��Ԃ�
        ndigit[j] = 0;//�Ȃ��݂�0��
    while ((moji = getchar()) != EOF)//EOF���������܂ŕ��������
        if(moji >= '0' && moji <= '9')//0����9�Ȃ�J��Ԃ�
        ++ndigit[moji-'0'];//�����̏��Ԃ𒲐�
    else if (moji == ' '||moji=='\n'||moji=='\t')
        ++nspace;//�����󔒂����s�������^�u�������ꂽ��nspace�Ɂ{�P
    else
        ++nother;//����ȊO��nother��+1

    printf("digits =");//digits��\��
    for (j=0;j<10;++j)//0����10�܂ŌJ��Ԃ�
        printf("%d",ndigit[j]);//ndigit��\��
    printf(", white space = %d,other = %d\n",nspace,nother);
//nspace,nother��\��
}
