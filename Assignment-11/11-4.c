#include<stdio.h>
int NextPrime(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Next prime no of %d is %d",n,NextPrime(n));

    return 0;
}

int NextPrime(int n)
{
    int i,j,flag;
    for(i=n;i;i++)
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
        return i;
    }
    
}