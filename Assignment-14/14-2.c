// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include<stdio.h>
int main()
{
    int A[10],i;
    float avg,sum=0;
    printf("Enter 10 number:");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);
    for(i=0;i<10;i++)
    sum=sum+A[i];
    avg=sum/10;
    printf("Average of 10 numbers is: %.2f",avg);

    return 0;
}