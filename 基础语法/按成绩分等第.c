#include<stdio.h>
int main(void)
{
    int a;
    printf("请输入分数（0-100）：");
    scanf("%d",&a);
    a=a/10;
    switch (a)
    {
        case 10:
        case 9:
            printf("优秀");break;
        case 8:
            printf("良好");break;
        case 7:
            printf("中等");break;
        case 6:
            printf("及格");break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("不及格");break;
        default:
            printf("输入的分数不在0-100范围内");
    }
    return 0;
}
