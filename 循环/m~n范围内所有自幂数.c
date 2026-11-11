#include<stdio.h>
#include<math.h>
int main(void)
{
    int m,n,c=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int N=0,k=0;
        for (int j=1;i/j!=0;j=j*10)
            N++;
        for (int a=1;i/a!=0;a=a*10)
        {
            k+=pow(i%(10*a)/a,N);
        }
        if (i==k)
        {
            printf("%d\n",i);
            c++;
        }
    }
    if (c==0)
        printf("No Answer");
    return 0;
}

