#include<stdio.h>
int fun(int);

int main()
{
    int j,n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        sum=sum+(fun(j)/j);
    }
    printf("%d",sum);

    return 0;
}

int fun(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f=(f*i);
    }
    return f;
}
