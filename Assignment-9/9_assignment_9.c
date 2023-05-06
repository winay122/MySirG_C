#include<stdio.h>
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d",&x);

    switch (x%2==0)
        {
            case 0:printf("%d",x);
            break;
            case 1:printf("%d",x+1);
            break;
        }

    return 0;
}