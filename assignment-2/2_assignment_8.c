#include<stdio.h>
int main()
{
    int a,res;
    printf("Enter a number:");
    scanf("%d",&a);
    res=a&1;
    if(res==1)
    printf("Number is odd");
    else
    printf("Number is even");

    return 0;
}