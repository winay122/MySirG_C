#include<stdio.h>

void fun(int , int);

int main()
{
    int a,b;
    printf("Enter no between prime no required: ");
    scanf("%d%d",&a,&b);
    fun(a,b);

    return 0;
}

void fun(int a, int b)
{
    int i,j,flag=0;

    for(i=a;i<=b;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(i==j)
        printf("%d ",i);
    }
}