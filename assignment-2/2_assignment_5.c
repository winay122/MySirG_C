#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=n%10+(n/10)%10+n/100;
    printf("Sum of digits of three-digit number is:%d",sum);
    return 0;
}