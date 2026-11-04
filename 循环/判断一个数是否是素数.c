#include<stdio.h>
int main(void)
{
    int n,m=0;
    scanf("%d",&n);
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<n;j++)
        {
            if (n==i*j)
                m++;
        }
    }
    if (m==0&&n!=1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
