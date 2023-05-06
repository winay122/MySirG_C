//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void RevNatural(int);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    RevNatural(n);

    return 0;
}

void RevNatural(int n)
{
    if(n)
    {
        printf("%d ",n);
        RevNatural(n-1);
    }
}

