#include<stdio.h>
int main(void)
{
  int a[100],i;
  printf("请输入 10 个整数:\n");
  for (i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("逆序输出的数组元素是:\n");
  for (i=9;i>=0;i--)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
