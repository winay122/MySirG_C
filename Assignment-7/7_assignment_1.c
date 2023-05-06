#include<stdio.h>
int main()
{
    int n,i,res=0,prev=0,cur=1;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        res=prev+cur;
        prev=cur;
        cur=res;
    }
    if(n==1)
    printf("1");
    else
    printf("%d ",res);
    return 0;
}