#include<stdio.h>

void NaturalNo(int);

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    NaturalNo(n);

    return 0;
}

void NaturalNo( int n)
{
    if(n==0)
    return;
    NaturalNo(n-1);
    printf("%d ",n);

}