#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if (n>=100 && n<1000)
    {
        printf("%d is three digit number",n);

    }
    else
    printf("%d is not three digit number",n);
    
    return 0;
}