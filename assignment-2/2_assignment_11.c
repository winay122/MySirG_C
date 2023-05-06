#include<stdio.h>
int main()
{
    int n,rem=0,sum=0,x;
    
    printf("Enter a Number:\n");
     scanf("%d",&n);
     x=n;

     while(n!=0)
     {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
     }
   
    printf("the resulting no is:%d",x*10+sum);

    return 0;
}