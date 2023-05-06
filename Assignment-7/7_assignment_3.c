#include<stdio.h>
int main()
{
    int n,res=0,prev=0,cur=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;1;i++)
    {
        res=prev+cur;
        prev=cur;
        cur=res;
        if(n==res)
        {
            printf("%d is a Fibonacci number.",res);
            break;
        }
        if(res>n)
        {
            printf("%d is not a Fibonacci number.",n);
            break;
        }
    }
    return 0;
}