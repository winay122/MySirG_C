#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<2*n;i+=2)
    {
        sum=sum+i;
    }
    printf("Sum of n odd natural number is:%d",sum);
    return 0;
}