#include<stdio.h>
int prime(int);

int main()
{
    int n,z;
    printf("Enter a number: ");
    scanf("%d",&n);
    z=prime(n);
    if(z==1)
    printf("Not prime number.");
    else
    printf("Prime number.");

    return 0;
}

int prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    return 1;
    else
    return 0;
}
