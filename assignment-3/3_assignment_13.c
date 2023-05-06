#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    if(n%2==0 && n%3==0)
    printf("%d is divisible by 2 and 3",n);
    else
    printf("%d is not divisible by 2 and 3",n);

    return 0;
}