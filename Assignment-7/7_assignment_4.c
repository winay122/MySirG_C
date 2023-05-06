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
     printf("%d is HCF of %d and %d",hcf,a,b);

    return 0;
}