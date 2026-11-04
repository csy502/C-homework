#include<stdio.h>
int main(void)
{
    int e=0,o=0,i;
    double m=0,n=0;
    while (scanf("%d",&i)==1&&i!=0)
    {
        if (i%2==0)
        {
            m+=i;
            e++;
        }
        else
        {
            n+=i;
            o++;
        }
    }
    m/=e;
    n/=o;
    printf("Number of even:%d;Average of even:%.2lf\nNumber of odd:%d;Average of odd:%.2lf\n",e,m,o,n);
    return 0;
}
