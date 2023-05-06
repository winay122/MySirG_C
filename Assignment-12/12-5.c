//Write a recursive function to print first N even natural numbers

#include<stdio.h>
void evenNatural(int);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    evenNatural(n);

    return 0;
}

void evenNatural(int n)
{
    if(n==0)
    return;
    evenNatural(n-1);
    printf("%d ",2*n);
}