#include<stdio.h>
void fun(int);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    fun(n);
    return 0;
}

void fun(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",i);
    
}