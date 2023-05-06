#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%5==0)
    printf("%d id divisible by 5",a);
    else
    printf("%d not divisible by 5",a);

    return 0;
}