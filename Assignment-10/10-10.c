#include<stdio.h>
void fun(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
void fun(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while (n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        
    }
}