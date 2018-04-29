#include<stdio.h>
void main();

void main()
{
    FILE *fpFile;
    char target[7];
    char szStr[100];
    char *FileName="gunma.txt";
    int i,c,no;

    c=0;

    if((fpFile=fopen(FileName,"r"))==NULL){
        printf("File not open\n");
        return(-1);
    }
    fscanf(fpFile,"%s",szStr);
    printf("Read data=%s\n",szStr);

    /*while((c=fgetc(fpFile))!=EOF){
        printf( "%c", c );
    }*/

    fclose(fpFile);

    printf("郵便番号=");scanf("%s",target);

	char *ret;


  ret = strchr( szStr, target );
  if( ret != NULL ){
    printf( "%cを%d番目に発見しました¥n", target, ret - szStr );
  }
  else{
    printf( "%cは発見出来ませんno¥n", target );
  }


}
