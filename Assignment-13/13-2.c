//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumOdd(int);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Sum of odd natural number is: %d",sumOdd(n));

    return 0;
}
int sumOdd(int n)
{
    if(n)
    return ((2*n-1)+sumOdd(n-1));
}
