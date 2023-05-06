#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n%2==0)
    printf("%d is even number",n);
    else
    printf("%d id odd number");

    return 0;
}