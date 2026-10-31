#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c,s,S;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    S=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.3f",S);
    return 0;
}
