//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int Factorial(int);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Factorial of n is %d",Factorial(n));
    return 0;
}

int Factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
        return (Factorial(n-1)*n);
}
