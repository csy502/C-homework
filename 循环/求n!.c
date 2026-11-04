#include<stdio.h>
int main(void)
{
    int n,m=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        m*=i;
    printf("%d!=%d",n,m);
    return 0;
}
