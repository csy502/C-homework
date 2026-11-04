#include<stdio.h>
int main(void)
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for (i=1000000;i>0;i--)
    {
        if (a%i==0&&b%i==0)
        {
            break;
        }
    }
    for (j=1;j<1000000;j++)
    {
        if (j%a==0&&j%b==0)
        {
            break;
        }
    }
    printf("%d %d\n",i,j);
    return 0;
}
