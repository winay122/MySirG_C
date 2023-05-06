//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void DtoB(int);

int main()
{
    int x;
    printf("Enter a decimal number:");
    scanf("%d",&x);
    DtoB(x);

    return 0;
}

void DtoB(int x)
{
    if(x>0)
    {
        DtoB(x/2);
        printf("%d",x%2);
    }    
}