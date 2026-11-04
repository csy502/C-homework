#include<stdio.h>
int main(void)
{
    int n,m=1;
    scanf("%d",&n);
    printf("%d\n",100000*n);
    for (int i=1;i<=n;i++)
        m+=m;
    m=m/100;
    printf("%d",m);
    return 0;
}
