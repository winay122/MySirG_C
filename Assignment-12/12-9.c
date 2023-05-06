//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void DtoO(int);
int main()
{
    int x;
    printf("Enter a decimal number:");
    scanf("%d",&x);
    DtoO(x);

    return 0;
}

void DtoO(int x)
{
    if(x>0)
    {
        DtoO(x/8);
        printf("%d",x%8);
    }
}