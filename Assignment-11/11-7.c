#include<stdio.h>

void fibonacci(int);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    fibonacci(n);

    return 0;
}

void fibonacci(int n)
{
    int prev=0,curr=1,res=0,i;
    printf("1 ");
    for(i=1;i<n;i++)
    {
        res=prev+curr;
        prev=curr;
        curr=res;
        printf("%d ",res);
    }

}