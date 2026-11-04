#include<stdio.h>
#include<math.h>
int main(void)
{
    int m,n;
    scanf("%d %d",&m,&n);
    for (int N=2;N<10;N++)
    {
        for(m;m<=n;m++)
        {
            if (m==pow((m%10),N)+pow((m/10%10),N)+pow((m/100%10),N)+pow((m/1000%10),N)+pow((m/10000%10),N)+pow((m/100000%10),N)+pow((m/1000000%10),N))
                printf("%d\n",m);
        }
    }
    return 0;
}
