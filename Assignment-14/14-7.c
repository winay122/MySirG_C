// Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i,g1=-9998,g2=-9999;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<10;i++)
    {
        if(arr[i]<arr[i+1])
        {
            g2=arr[i];
            g1=arr[i+1];
        }
        else 
        {
            if(arr[i+1]>g2 && arr[i+1]<g1)
            g2=arr[i+1];
        }
    }
    printf("Second greatest number is:%d",g2);

    return 0;
}