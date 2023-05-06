//Write a recursive function to calculate sum of first N natural numbers.
#include<stdio.h>
int sumNatural(int);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Sum of n natural numbers is: %d",sumNatural(n));


    return 0;
}


int sumNatural(int n)
{
    if(n)
    {
      return (n+sumNatural(n-1));
    }
}