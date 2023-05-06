#include<stdio.h>
int main()
{
    int a,r;
    printf("Enter a Number:");
    scanf("%d",&a);
    r=a%10;
    printf("unit digit of %d is:%d",a,r);

    return 0;
}