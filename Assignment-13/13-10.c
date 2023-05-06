// Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
int power(int,int);

int power(int a,int b)
{
    if(b==1)
    return a;

    return (a*power(a,b-1));
}

int main()
{
    int num,pow;
    printf("Enter base Number: ");
    scanf("%d",&num);
    printf("Enter power number: ");
    scanf("%d",&pow);
    printf("%d to the base power %d is %d",num,pow,power(num,pow));

    return 0;
}