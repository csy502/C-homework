#include<stdio.h>
#include<math.h>
int main(void)
{
    float r,l,s;
    printf("请输入圆的半径：");
    scanf("%f",&r);
    l=2*M_PI*r;
    s=M_PI*r*r;
    printf("圆的周长为：%.3f\n",l);
    printf("圆的面积为：%.3f",s);
    return 0;
}
