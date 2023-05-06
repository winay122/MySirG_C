#include<stdio.h>
int hcf(int,int);

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d ",a,b,hcf(a,b));
    
    return 0;
}

int hcf(int a,int b)
{
    int min,i,res;
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        res=i;
    }
    return res;
}