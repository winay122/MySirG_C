#include<stdio.h>
int main()
{
    int a,r;
    printf("Enter a Number:");
    scanf("%d",&a);
    r=a/10;
    printf("Number without it's last digit is:%d",r);

    return 0;
}