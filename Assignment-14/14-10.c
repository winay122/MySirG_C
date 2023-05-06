// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user

#include<stdio.h>
int main()
{
   int a[10]={10,20,30,40,50,60,70,80,90,100};
   int b[10],i;
   for(i=0;i<10;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
   printf("\n"); 
   for(i=0;i<10;i++)
   printf("%d ",b[i]);

   return 0;
}