#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    printf("%d is posite number",a);
    else
    printf("%d is non-positive number",a);
    return 0;

}