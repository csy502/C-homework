#include<stdio.h>
int main(void)
{
    int s,v,T;
    double t;
    scanf("%d %d",&s,&v);
    t=s/v;
    if (t!=(double)s/v)
        t++;
    T=8*60-10-t;
    printf("%02d:%02d",T/60,T%60);
    return 0;
}
