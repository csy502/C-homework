#include<stdio.h>
int main(void)
{
    int a[30]={1,1},i,j=0,n;
    for (i=2;i<30;i++)
        a[i]=a[i-2]+a[i-1];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("%6d",a[i]);
        j++;
        if (j>=5)
        {
            printf("\n");
            j=0;
        }
    }
    return 0;
}
