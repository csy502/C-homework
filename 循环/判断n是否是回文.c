#include<stdio.h>
int main(void)
{
    int n,m=0;
    scanf("%d",&n);
    for (int i=1;n/i!=0;i*=10)
        m=n%(10*i)/i+10*m;
    if (m==n)
        printf("%d是回文",n);
    else
        printf("%d不是回文",n);
    return 0;
}
