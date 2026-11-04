#include<stdio.h>
int main(void)
{
    int a[10],b[10],k,i;
    printf("请输入原数组:\n");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("请输入k值:\n");
    scanf("%d",&k);
    for (i=0;i<10;i++)
    {
        int m=i+k;
        if (m>=10)
            m-=10;
        b[m]=a[i];
    }
    printf("右移%d位后的数组:\n",k);
    for (i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
