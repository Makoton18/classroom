#include <stdio.h>
#include <string.h>

void  explode(char*,char*);             // ���ڂ����o��
char  data[32][128];                    // 1ں��ޕ����ް�

void  main( )
{
    FILE   *fp;
    char    zip[128],buf[512],*cp;
    int     len;

    printf("\n***�X�֔ԍ�����***\n");
    printf("\n�X�֔ԍ�(�n�C�t���Ȃ�): "); fflush(stdout);
    gets(zip);                             // �X�֔ԍ�����
    len=strlen(zip);                       // �X�֔ԍ�������

    fp=fopen("gunma.txt","r");           // �X�֔ԍ�̧�يJ��
    if ( fp==NULL ) goto END;              // ̧�ق��J���Ȃ�

    while ( 1 )
      {
        cp=fgets(buf,256,fp);              // 1ں��ޓǂ�
        if ( cp==NULL ) break;             // EOF

        explode(",",buf);                  // ���ڂ����o��

        if ( memcmp(&data[2][0],zip,len)!=0 )
             continue;                     // �X�֔ԍ���������

        printf("\n�Z��:%s%s%s\n",&data[6][0],&data[7][0],&data[8][0]);
        break;
      }

    fclose(fp);                            // �X�֔ԍ�̧�ٕ���

END: ;
}


void  explode(
/*----------------------------------*/
/*  �b�r�u�f�[�^���獀�ڂ����o��  */
/*----------------------------------*/
char  *kugiri,  // ��؂蕶��
char  *buf)     // CSV��1ں���
{
     char  *cp0,*cp;
     int   i=0,len;

     memset(&data[0][0],'\0',32*128);      // �ް��̑S������NULL��

     cp0=buf;                              // CSV�ް��̐擪���ڽ

     for( i=0; i<31; i++ )
       {
         if ( *cp0==0x22 ) cp0++;          // �ŏ���"(0x22)������
         cp=strstr(cp0,kugiri);            // ��؂蕶��������
         if ( cp==NULL ) break;            // ��؂蕶���Ȃ�

         len=cp-cp0;                       // ���ڂ̕�����
         if ( *(cp-1)==0x22 ) len--;       // �Ō��"(0x22)������
         if ( len>0 )                      // ���ڂ���
           {
             memcpy(&data[i][0],cp0,len);  // ���ڂ̕�������߰
           }
         cp0=cp+1;                         // ���̕����̱��ڽ
       }

     strcpy(&data[i][0],cp0);              // �Ō�̍��ڂ��߰
}
