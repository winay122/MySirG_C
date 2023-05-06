//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>

void oddNatural(int);

int main()
{
    int n;
    printf("Emter n:");
    scanf("%d",&n);
    oddNatural(n);

    return 0;
}

void oddNatural(int n)
{
    if(n==0)
    return;
    printf("%d ",2*n-1);
    oddNatural(n-1);
}