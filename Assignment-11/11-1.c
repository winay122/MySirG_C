#include<stdio.h>
int lcm(int,int);

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is %d",a,b,lcm(a,b));

    return 0;
}

int lcm(int a,int b)
{
    int res,max,i;
    max=a>b?a:b;
    for(i=max;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
            
        }
    }
}