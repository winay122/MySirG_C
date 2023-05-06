#include<stdio.h>
int prime(int n);

int main()
{
    int n;
    printf("Enter a number n= ");
    scanf("%d",&n);
    prime(n);

    return 0;
}

int prime(int n)
{
    int i,j,flag,count=1;
    printf("2 ");
    for(i=3;count<n;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
        printf("%d ",i);
        count++;
        }
    }
}