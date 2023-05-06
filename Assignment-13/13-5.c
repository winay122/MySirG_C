//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int SumDigits(int);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Sum of digits of number:%d",SumDigits(n));

    return 0;
}
int SumDigits(int n)
{
    if(n)
    {
        return ((n%10)+SumDigits(n/10));
    }
}
