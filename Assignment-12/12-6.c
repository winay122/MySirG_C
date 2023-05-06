//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void revEven(int);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    revEven(n);

    return 0;
}
void revEven(int n)
{
    if(n==0)
    return;
    printf("%d ",n*2);
    revEven(n-1);
}