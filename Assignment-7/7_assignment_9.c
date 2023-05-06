#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,res=0,temp,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;

    while (temp)
    {
        count++;
        temp=temp/10;
    }
    temp=n;

    while(temp)
    {
        rem=temp%10;
        res=res+pow(rem,count);
        temp=temp/10;
        
    }
    if(res==n)
    printf("%d is a armstrong number.",n);
    else
    printf("Not a Armstrong number.");

    return 0;
}