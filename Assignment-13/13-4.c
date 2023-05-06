//Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int SumSquare(int);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Sum of Square of n Natural number is:%d",SumSquare(n));

    return 0;
}

int SumSquare(int n)
{
    if(n)
    {
        return ((n*n)+SumSquare(n-1));
    }
}