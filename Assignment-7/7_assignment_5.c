#include<stdio.h>
int main()
{
    int a,b,min,i,hcf;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    min=a>=b?a:b;

    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    if(hcf==1)
     printf("%d and %d is co-prime numbers",a,b);
     else
     printf("non co-prime number");

    return 0;
}