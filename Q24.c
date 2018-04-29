#include <stdio.h>
#define IN 1 //単語の中
#define OUT 0 //単語の外
//入力中の行、単語、文字のカウント
main()
{
  int moji,nline,nword,ncharacter,state;//文字の定義

  state=OUT;//OUTをstateに代入
  nline = nword = ncharacter = 0;//中身を0に
  while ((moji= getchar()) != EOF) {//キーボードから文字を見つけEOFまで入力する
    ++ncharacter;//ncharacterに１をたす
    if (moji == '\n')//もし改行したら
        ++nline;//nlineに１をたす
    if (moji == ' ' || moji == '\n' || moji == '\t')//もしNULLか改行か水平タブだったら
        state = OUT;//OUTがstate
    else if (state == OUT){//また、もしOUTがstateのとき
        state = IN;//INをstateに代入
        ++nword;//nwordに1をたす
    }
  }
  printf("nline=%d,nword=%d,ncharacter=%d\n",nline,nword,ncharacter);
//nline,nword,ncharacteｒを表示
}
