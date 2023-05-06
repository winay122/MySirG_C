// Write a program to find the greatest number stored in an array of size 10. Take array values from the user

#include<stdio.h>
int main()
{
    int max=0,i,arr[10];
    printf("Enter 10 number:");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("greatest number is %d",max);
    return 0;
}