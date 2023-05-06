#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    printf("%d,%d",a,b);
    printf("Enter choice:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : printf("%d+%d= %d",a,b,a+b);
        break;
        case 2 : printf("%d-%d= %d",a,b,a-b);
        break;
        case 3 : printf("%d*%d= %d",a,b , a*b);
        break;
        case 4 : printf("%d/%d= %d",a,b, a/b);
        break;
        default : printf("Invalid input");
        
    }
    return 0;
}