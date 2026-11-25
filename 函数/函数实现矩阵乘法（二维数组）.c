/*函数实现矩阵乘法（二维数组）：编写函数void matrix_multiply(int a[][10], int b[][10], int c[][10], int m, int n, int p)，计算 m×n 矩阵 A 与 n×p 矩阵 B 的乘积（结果存于 m×p 矩阵 C），主函数输入矩阵并输出结果。

【样例输入】

请输入矩阵A的行数m和列数n:2 3

请输入矩阵A的元素(按行输入):

1 2 3

4 5 6

请输入矩阵B的列数p(行数需等于A的列数n=3):2

请输入矩阵B的元素(按行输入):

7 8

9 10

11 12

【样例输出】

矩阵AXB的结果:

58 64

139 154

【说明】输出中乘号用大写字母X表示，其它符号都是英文半角符号

*/
#include<stdio.h>
void matrix_multiply(int a[][10], int b[][10], int c[][10], int m, int n, int p)
{
    int i,j,k;
    for (i=0;i<10;i++)
        for (j=0;j<10;j++)
            c[i][j]=0;
    for (i=0;i<m;i++)
        for (j=0;j<p;j++)
            for (k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
}
int main(void)
{
    int m,n,p,i,j;
    int a[10][10],b[10][10],c[10][10];
    printf("请输入矩阵A的行数m和列数n:");
    scanf("%d%d",&m,&n);
    printf("请输入矩阵A的元素(按行输入):\n");
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("请输入矩阵B的列数p(行数需等于A的列数n=%d):",n);
    scanf("%d",&p);
    printf("请输入矩阵B的元素(按行输入):\n");
    for (i=0;i<n;i++)
        for (j=0;j<p;j++)
            scanf("%d",&b[i][j]);
    matrix_multiply(a,b,c,m,n,p);
    printf("矩阵AXB的结果:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<p;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
