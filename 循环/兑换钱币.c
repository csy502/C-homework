#include<stdio.h>
int main(void)
{
    int n,x=0;
    while (scanf("%d",&n)==1&&n!=0)
    {
        int t=0;
        for (int a=0;a<=n;a++)
        {
            for (int b=0;b<=n;b+=2)
            {
                for (int c=0;c<=n;c+=5)
                {
                    if (a+b+c==n)
                        t++;
                }
            }
        }
        x++;
        printf("Case %d:%d\n",x,t);
    }
    return 0;
}
