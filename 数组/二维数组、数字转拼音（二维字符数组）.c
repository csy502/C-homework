#include<stdio.h>
int main(void)
{
    char c[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int a[10][10];
    int i,j,k,x,y,b[10]={0,0,0,0,0,0,0,0,0,0},d[8];
    scanf("%d %d",&y,&x);
    for (i=0;i<y;i++)
    {
        for (j=0;j<x;j++)
        {
            scanf("%d",&a[i][j]);
            b[i]+=a[i][j];
        }
    }
    for (i=0;i<y;i+=2)
    {
        printf("%d:",b[i]);
        if (b[i]==0)
            printf("%5s\n",c[0]);
        else
        {
            j=0;
            for (b[i];b[i]>0;b[i]/=10)
            {
                d[j]=b[i]%10;
                j++;
            }
            for (k=j-1;k>=0;k--)
                printf("%5s",c[d[k]]);
            printf("\n");
        }
    }
    return 0;
}
