#include<stdio.h>
int main()
{
    int n,i,res=0,prev=0,cur=1;
    printf("Enter n:");
    scanf("%d",&n);

    printf("1 ");
    for(i=1;i<n;i++)
    {
        res=prev+cur;
        printf("%d ",res);
        prev=cur;
        cur=res;
    }
    return 0;
}