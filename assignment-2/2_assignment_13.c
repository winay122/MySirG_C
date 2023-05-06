#include<stdio.h>
int main()
{
    int n;
    printf("Enter three digit Number: ");
    scanf("%d",&n);

    int r=n%10;
    int q=n/10;

    printf("The rotated number is: %d",r*100+q);

    return 0;
}