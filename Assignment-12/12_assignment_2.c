#include<stdio.h>

void RevNnumber(int);

int main()
{
    int n;
    printf("Enter n Number: ");
    scanf("%d",&n);

    RevNnumber(n);

    return 0;
}

void RevNnumber(int n)
{
    if(n==0)
    return;
    printf("%d ",n);
    RevNnumber(n-1);
}