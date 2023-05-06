#include<stdio.h>
int fun(int,int);

int main()
{
    int n,a,z;
    printf("Enter a number and a digit to find : ");
    scanf("%d%d",&n,&a);
    z=fun(n,a);
    if(z==1)
    printf("%d contain %d",n,a);
    else
    printf("%d does not contain %d",n,a);

    return 0;
}
int fun(int n,int a)
{
    while (n)
    {
        int rem;
        rem=n%10;
        if(rem==a)
        return 1;
        else
        n=n/10;
    }
    return 0;
}