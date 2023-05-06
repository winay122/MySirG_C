#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    if(n>0)
    printf("positive Number");
    else if(n==0)
    printf("Zero");
    else
    printf("negative Number");

    return 0;
}