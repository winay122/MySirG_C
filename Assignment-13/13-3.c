//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumEven(int);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Sum of odd natural number is: %d",sumEven(n));

    return 0;
}
int sumEven(int n)
{
    if(n)
    return ((2*n)+sumEven(n-1));
}
