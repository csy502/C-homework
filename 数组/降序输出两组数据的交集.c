#include<stdio.h>
int main(void)
{
    int a[20],b[20],m,n,s=0,i,j,t,k;
    scanf("%d",&m);
    for (i=0;i<m;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&k);
        for (j=0;j<m;j++)
        {
            if (a[j]==k)
            {
                b[s]=k;
                s++;
            }
        }
    }
    for (i=0;i<s-1;i++)
    {
        for (j=0;j<s-1;j++)
        {
            if (b[j]<b[j+1])
            {
                t=b[j+1];
                b[j+1]=b[j];
                b[j]=t;
            }
        }
    }
    for (i=0;i<s;i++)
        printf("%6d",b[i]);
    return 0;
}
