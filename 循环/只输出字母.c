#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char c;
    while ((c=getchar())!='\n')
    {
        if (isalpha(c))
            printf("%c",c);
    }
    return 0;
}
