#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100];
    int b[100];
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int t,y;
    int yy[50];
    int l,m;
    int o;
    l=0;
    m=0;
    d=1;
    printf("l”");
    scanf("%d",&c);
    o=y;
    e=c;
    f=c;
    m=c;
    c--;
    for(;c>=0;c--)
    {
        a[c]=d;
        d++;
    }
    int p;

    for(;p>=0;p--)
    {

        for(;g>0;g--)
        {
            h=rand()%f;//“ü‚ê‘Ö‚¦”Ô†
            i=rand()%f;//“ü‚ê‘Ö‚¦”Ô†
            j=a[h];
            a[h]=a[i];
            a[i]=j;
        }
    }

    f--;
    //ˆÈ‰º•\Ž¦ŠÖŒW
    for(;f>=0;f--)
    {
        printf("%d ",a[f]);
        if(f==31)
        {   printf("\n\n");
        }
        if(f==25)
        {   printf("\n\n");
        }
        if(f==19)
        {   printf("\n\n");
        }
        if(f==13)
        {   printf("\n\n");
        }
        if(f==7)
        {   printf("\n\n   ");
        }
        if(f==3)
        {   printf("\n\n   ");
        }

    }
    printf("\n\n");

    return 0;
}

