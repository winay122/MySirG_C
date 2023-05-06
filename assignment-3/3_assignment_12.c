#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);

    if (ch>='A' && ch<'Z')
    printf("%c is uppercase Alphabet",ch);
    else
    printf("%c is a lowercase Alphabet",ch);
    

    return 0;
}