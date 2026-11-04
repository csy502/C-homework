#include<stdio.h>
int main(void)
{
    int y[3001],m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,Y,M,D,s=0;
    scanf("%d-%d-%d",&Y,&M,&D);
    for (i=1980;i<Y;i++)
    {
        if ((i%4==0&&i%100!=0)||i%400==0)
            y[i]=366;
        else
            y[i]=365;
        s+=y[i];
    }
    if ((Y%4==0&&Y%100!=0)||Y%400==0)
        m[2]=29;
    for (i=1;i<M;i++)
        s+=m[i];
    s+=D+1;
    switch (s%7)
    {
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
        case 0:printf("Sunday");break;
    }
    return 0;
}
