#include <stdio.h>
#include <string.h>

void  explode(char*,char*);             // 項目を取り出す
char  data[32][128];                    // 1ﾚｺｰﾄﾞ分のﾃﾞｰﾀ

void  main( )
{
    FILE   *fp;
    char    zip[128],buf[512],*cp;
    int     len;

    printf("\n***郵便番号検索***\n");
    printf("\n郵便番号(ハイフンなし): "); fflush(stdout);
    gets(zip);                             // 郵便番号入力
    len=strlen(zip);                       // 郵便番号文字数

    fp=fopen("gunma.txt","r");           // 郵便番号ﾌｧｲﾙ開く
    if ( fp==NULL ) goto END;              // ﾌｧｲﾙを開けない

    while ( 1 )
      {
        cp=fgets(buf,256,fp);              // 1ﾚｺｰﾄﾞ読む
        if ( cp==NULL ) break;             // EOF

        explode(",",buf);                  // 項目を取り出す

        if ( memcmp(&data[2][0],zip,len)!=0 )
             continue;                     // 郵便番号がちがう

        printf("\n住所:%s%s%s\n",&data[6][0],&data[7][0],&data[8][0]);
        break;
      }

    fclose(fp);                            // 郵便番号ﾌｧｲﾙ閉じる

END: ;
}


void  explode(
/*----------------------------------*/
/*  ＣＳＶデータから項目を取り出す  */
/*----------------------------------*/
char  *kugiri,  // 区切り文字
char  *buf)     // CSVの1ﾚｺｰﾄﾞ
{
     char  *cp0,*cp;
     int   i=0,len;

     memset(&data[0][0],'\0',32*128);      // ﾃﾞｰﾀの全文字をNULLに

     cp0=buf;                              // CSVﾃﾞｰﾀの先頭ｱﾄﾞﾚｽ

     for( i=0; i<31; i++ )
       {
         if ( *cp0==0x22 ) cp0++;          // 最初の"(0x22)を除く
         cp=strstr(cp0,kugiri);            // 区切り文字を検索
         if ( cp==NULL ) break;            // 区切り文字なし

         len=cp-cp0;                       // 項目の文字数
         if ( *(cp-1)==0x22 ) len--;       // 最後の"(0x22)を除く
         if ( len>0 )                      // 項目あり
           {
             memcpy(&data[i][0],cp0,len);  // 項目の文字列をｺﾋﾟｰ
           }
         cp0=cp+1;                         // 次の文字のｱﾄﾞﾚｽ
       }

     strcpy(&data[i][0],cp0);              // 最後の項目をｺﾋﾟｰ
}
