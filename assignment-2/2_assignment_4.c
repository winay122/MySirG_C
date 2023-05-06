#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Number:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap value of a is:%d\n",a);
    printf("Swap value of b is:%d",b);

    return 0;
}