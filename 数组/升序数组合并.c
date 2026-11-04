#include<stdio.h>
int main(void)
{
    int a[5],b[3],c[8],i,j=0,k=0;
    printf("请输入包含5个元素的升序数组1:\n");
    for (i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("请输入包含3个元素的升序数组2:\n");
    for (i=0;i<3;i++)
        scanf("%d",&b[i]);
    printf("合并后的数组:\n");
    for (i=0;i<8;i++)
    {
        if (a[j]>b[k])
        {
            c[i]=b[k];
            k++;
        }
        else
        {
            c[i]=a[j];
            j++;
        }
        if (k>3)
            break;
    }
    for (i;i<8;i++)
    {
        c[i]=a[j];
        j++;
    }
    for (i=0;i<8;i++)
        printf("%d ",c[i]);
    return 0;
}
