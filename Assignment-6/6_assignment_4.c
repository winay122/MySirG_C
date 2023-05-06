#include<stdio.h>
int main()
{
    int n,i,sum=0,sqr;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sqr=i*i;
        sum+=sqr;
    }
    printf("Sum of Square of natural number is:%d",sum);
    return 0;
}