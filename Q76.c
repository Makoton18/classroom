#include<stdio.h>

int main(void);
int ptaInput(struct ptaMeibo *);
int ptaOutput(struct ptaMeibo );
int ptaWrite(FILE *,struct ptaMeibo *);
int ptaRead(FILE *,struct ptaMeibo *);

struct ptaMeibo{
    short number;
    char std_name[20];
    char pta_name[20];
    char address[30];
    char tel[20];
};

int main(void)
{
    struct ptaMeibo pMeibo[20];
    int i;
    FILE *fp;
    for(i=0;i<5;i++){
        ptaInput(&pMeibo[i]);
    }
    if((fp=fopen("DATAFILE.DAT","wb"))==NULL){
        printf(stderr,"エラー：ファイルが開けません\n");
        return(-1);
    }
    for(i=0;i<5;i++){
        ptaWrite(fp,&pMeibo[i]);
    }
    fclose(fp);

    printf("書き込んだ内容を読み込んでみる\n");


    if((fp=fopen("DATAFILE.DAT","rb"))==NULL){
        printf(stderr,"エラー：ファイルが開けません\n");
        return(-1);
    }
    for(i=0;i<5;i++){
        ptaRead(&pMeibo[i],fp);
        ptaOutput(pMeibo[i]);
    }
    fclose(fp);
    return(0);
}

int ptaInput(struct ptaMeibo *pm)
{
        printf("?number="); scanf("%hd",&pm->number);
        printf("?std_name="); scanf("%s",pm->std_name);
        printf("?pta_name="); scanf("%s",pm->pta_name);
        printf("?address="); scanf("%s",pm->address);
        printf("?tel="); scanf("%s",pm->tel);
        return(0);
}

int ptaOutput(struct ptaMeibo pm)
{
        printf("?number=%hd\n",pm.number);
        printf("?std_name=%s\n",pm.std_name);
        printf("?pta_name=%s\n",pm.pta_name);
        printf("?address=%s\n",pm.address);
        printf("?tel=%s\n",pm.tel);
        return(0);
}

int ptaWrite(FILE *fp,struct ptaMeibo *pm)
{
    fwrite(pm,sizeof(struct ptaMeibo),1,fp);
    return(0);
}

int ptaRead(FILE *fp,struct ptaMeibo *pm)
{
    fread(pm,sizeof(struct ptaMeibo),1,fp);
    return(0);
}






