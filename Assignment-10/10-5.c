#include<stdio.h>
void fun(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}

void fun(int n)
{
    int i;
    for(i=1;i<2*n;i+=2)
    printf("%d ",i);
}

