#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[n][1000],tmp[1000],c[n],tmp1,tmp2;
    for(int i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
        c[i]=a[i][0];
        tmp1=toupper(a[i][0]);
        a[i][0]=tmp1;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(tmp,a[j+1]);
                strcpy(a[j+1],a[j]);
                strcpy(a[j],tmp);
                tmp2=c[j+1];
                c[j+1]=c[j];
                c[j]=tmp2;
            }

        }
    }

    for(int i=0;i<n;i++)
    {
        a[i][0]=c[i];
        printf("%s\n",a[i]);
    }

    return 0;
}
