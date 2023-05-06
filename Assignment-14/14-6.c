// Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
    printf("Enter 10 numbera:");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
}