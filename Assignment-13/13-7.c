//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int,int);

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,HCF(a,b));

    return 0;
}

int HCF(int a,int b)
{
    int max,min;
    max=a>=b?a:b;
    min=a<=b?a:b;

    if(max%min==0)
    return min;

    HCF(min,(max%min));
}