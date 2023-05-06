//Write a recursive function to print first N natural numbers
#include<stdio.h>
void NaturalNo(int);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    NaturalNo(n);

    return 0;
}

void NaturalNo(int n)
{
    if(n)
    {
        NaturalNo(n-1);
        printf("%d ",n);
    }
}