#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter n till natural number to print:");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
        
    }
    printf("Sum of n natural number is %d",sum);
    
    return 0;
}