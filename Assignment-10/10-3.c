#include<stdio.h>
int evenOdd (int);
int main()
{
    int n,res;
    printf("Enter a number: ");
    scanf("%d",&n);

    res=evenOdd(n);
    printf("%d",res);

    return 0;
}

int evenOdd( int a)
{
    if(a%2==0)
    return 1;
    else
    return 0;
}