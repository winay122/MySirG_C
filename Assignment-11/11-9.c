#include<stdio.h>
int sqr(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Square of %d is %d",a,sqr(a));

    return 0;

}

int sqr(int a)
{
    return a*a;
}