#include<stdio.h>
int main(void)
{
    int a[100]={1,1},b[100]={1,1},n,i,j;
    scanf("%d",&n);
    printf("%6d\n",a[0]);
    if (n>1)
        printf("%6d%6d\n",a[0],a[1]);
    if (n>2)
    {
        for (i=2;i<n;i++)
        {
            printf("%6d",b[0]);
            for (j=1;j<i;j++)
            {
                b[j]=a[j]+a[j-1];
                printf("%6d",b[j]);
            }
            b[i]=1;
            printf("%6d\n",b[i]);
            for (j=0;j<=i;j++)
                a[j]=b[j];
        }
    }
    return 0;
}
