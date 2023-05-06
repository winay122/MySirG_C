#include<stdio.h>
long comb(int, int);
long fact(long);
int main()
{
    int n,r;
    long s;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    s=comb(n,r);
    printf("combination is %d",s);
    return 0;
}

long fact(long n)
{
    int i;
    long sum=1;
    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
long comb(int a, int b)
{
    long res;
    res=fact (a)/(fact (b) * fact (a-b));
    return res;
}
