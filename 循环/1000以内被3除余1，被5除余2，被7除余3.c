#include<stdio.h>
int main(void)
{
    int n=0;
    for (int i=1;i<=1000;i++)
    {
        if (i%3==1&&i%5==2&&i%7==3)
        {
            printf("%5d",i);
            n++;
        }
        if (n==5)
        {
            printf("\n");
            n=0;
        }
    }
    return 0;
}
