#include<stdio.h>

int EvenOdd(int);

int main()
{
    int n,res;
    printf("Enter a number: ");
    scanf("%d",&n);
    res=EvenOdd(n);
    printf("%d",res);
}

int EvenOdd(int a)
{
    if (a%2==0)
    return 1;
    else
    return 0;
}