#include <stdio.h>
main()
{
    int moji,j,nspace,nother;//文字を定義
    int ndigit[10];//ndigitの箱を10こ作る
    nspace = nother = 0;//なかみを0に
    for(j=0;j<10;++j)//0から10まで繰り返す
        ndigit[j] = 0;//なかみを0に
    while ((moji = getchar()) != EOF)//EOFが押されるまで文字を入力
        if(moji >= '0' && moji <= '9')//0から9なら繰り返す
        ++ndigit[moji-'0'];//数字の順番を調整
    else if (moji == ' '||moji=='\n'||moji=='\t')
        ++nspace;//もし空白か改行か水平タブが押されたらnspaceに＋１
    else
        ++nother;//それ以外はnotherに+1

    printf("digits =");//digitsを表示
    for (j=0;j<10;++j)//0から10まで繰り返す
        printf("%d",ndigit[j]);//ndigitを表示
    printf(", white space = %d,other = %d\n",nspace,nother);
//nspace,notherを表示
}
