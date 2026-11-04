#include<stdio.h>
int main(void)
{
    float a[12],s=0;
    int i,j,b[12];
    for (i=0;i<12;i++)
    {
        scanf("%f",&a[i]);
        s+=a[i];
    }
    for (i=0;i<12;i++)
    {
        b[i]=0.5+100*a[i]/s;
        printf("%2d(%2d%%) ",i+1,b[i]);
        for (j=0;j<b[i];j++)
            printf("#");
        printf("\n");
    }
    return 0;
}
