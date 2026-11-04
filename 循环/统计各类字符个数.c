#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int letter=0,blank=0,digit=0,other=0;
    printf("Input 10 characters: ");
    for (int i=1;i<=10;i++)
    {
        char c;
        c=getchar();
        if (isalpha(c))
            letter++;
        else if (isdigit(c))
            digit++;
        else if (isspace(c))
            blank++;
        else
            other++;
    }
    printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,digit,other);
    return 0;
}
