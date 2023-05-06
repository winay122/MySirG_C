// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int countDigit(int a)
{
    if(a==0)
    return 0;
    return (1+countDigit(a/10));
}

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Number of digits in %d is %d",a,countDigit(a));

    return 0;
}