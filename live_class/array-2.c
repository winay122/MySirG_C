#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter 10 numbers:");

    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        se=se+a[i];
        else
        so+=a[i];
    }
    printf("Sum of Even number is %d\n",se);
    printf("Sum of Odd number is %d",so);
        
   return 0;
}