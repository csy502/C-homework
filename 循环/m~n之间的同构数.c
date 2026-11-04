#include<stdio.h>
int main(void)
{
    int m,n,a,b,c=0;
    scanf("%d %d",&m,&n);
    for (m-1;m<=n;m++)
    {
        int w=1;
        while (w<m)
            w=w*10;
        if (m*m%w==m||m==0||m==1)
        {
            printf("%d\n",m);
            c++;
        }
    }
    if (c==0)
        printf("No Answer");
    return 0;
}
