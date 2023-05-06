#include<stdio.h>
int fact(int);
int fun(int,int);
int main()
{
    int n,r,res;
    printf("Enter n and r :");
    scanf("%d%d",&n,&r);
    res=fun(n,r);
    printf("arrangements from %d items and %d selected at a time is :%d",n,r,res);
    return 0;
}
int fact(int a)
{
    int z=1,i;
    for(i=1;i<=a;i++)
    {
    z=z*i;
    }
    return z;
}
int fun(int n,int r)
{
    int per;
    per=fact(n)/fact(n-r);
    return per;
}
