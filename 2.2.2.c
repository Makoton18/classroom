#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *StrString(const char *, const char *);

int main(void)
{
    FILE *fp;
    char *fname = "gunma.txt";
    char szStr[100]
    char number[7];
    char *ret;
    int c;

    fp = fopen( fname, "r" );
    if( fp == NULL ){
        printf( "%sファイルが開けません¥n", fname );
        return -1;
    }

    while( (c = fgetc( fp )) != EOF ){
        printf( "%c", c );
    }

    fclose( fp );

    printf("number=");scanf("%s", number);

    int n = 0;            /* カウンタ */
      /* 検索対象の文字列 */
    char *s1 = "sizeof(char) <= sizeof(short) <= sizeof(int) <= sizeof(long)";
    char *s2 = "sizeof";        /* 部分文字列 */


    while ((s1 = StrString(fp, number)) != NULL) { /* 部分文字列が見つかったら */
        n++;                                   /* カウンタを１増やす */
        fp = fp + strlen(number);                  /* 文字列s2の長さだけポインタを進めて */
    }                                          /* 次のStrString(  )の呼び出しに備える */

    if (n == 0)
        printf("NO\n");
    else if (n == 1)
        printf("1。\n");
    else
        printf("%d\n", n);

  return 0;
}


char *StrString(const char *s1, const char *s2)
{
    int n;

    n = strlen(fp);                            /* 文字列s2の長さを求める */

    while (1) {
        fp = strchr(fp, number[0]);                /* s2の先頭の１文字を探す */
        if (fp == NULL)                        /* 見つからなければ */
            return (NULL);                     /* NULLを返す */
        if(strncmp(fp, number, n) == 0)            /* 見つかったらn文字比較 */
            return (char *)fp;                 /* 一致したらポインタを返す */
        fp++;    /* ポインタを進めて */         /* s1はconstを付けて宣言 */
    }            /* 次の strchr に備える */     /* しているのでキャストが必要 */
}



/*int main(void) {
   char s1[] = "abcdefgij";
   char s2[] = "def";
char *ret;

    if ((ret = strstr(s1, s2)) != NULL ) {
        printf("%sは%d番目にありました．\n", s2, ret - s1);
    } else {
        printf("%sはありませんでした．\n", s2);
    }

}*/
