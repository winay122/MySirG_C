#include<stdio.h>
long fac(int);
int main()
{
    int n,s;
    printf("Enter n: ");
    scanf("%d",&n);
    s=fac(n);
    printf("Factorial %d is %d",n,s);
    return 0;
}

long fac(int n)
{
    int i;
    long sum=1;
    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}