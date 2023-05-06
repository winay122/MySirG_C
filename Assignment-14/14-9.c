// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
int main()
{
    int i,a[10];
    printf("Enter 10 Numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=9;i>=0;i--)
        printf("%d ",a[i]);
    
    return 0;
}