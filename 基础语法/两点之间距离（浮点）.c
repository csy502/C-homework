#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c,d,e;
    scanf("%f %f",&a,&b);
    scanf("%f %f",&c,&d);
    e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%.2f\n",e);
    return 0;
}
