#include<stdio.h>
int main()
{
    int choice,a,b,c;
    while(1)
    {
    printf("\n\n---------------------\n\n");
    printf("Enter your choice:\n");
    printf("1. To check isoceles triangle\n");
    printf("2. To check Right angle triangle\n");
    printf("3. To check Equilateral triangle\n"); 
    
    scanf("%d",&choice);

    printf("Enter Three sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);

    switch(choice)
    {
        case 1 : if (a == b || b == c || c == a)
                    printf("It is a isoceles triangle");
                else
                    printf("It is not a isoceles triangle");    
        break;
        case 2 : if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) 
                    printf("It is a Right angle triangle");
                else
                    printf("It is not a right angle triangle");
        break;
        case 3 : if(a==b && b==c)
                    printf("It is Eqilatral triangle");
                else
                    printf("It is not Equilatral triangle");
        break;
       
        default : printf("Invalid input");
        
    }
    }
    return 0;
}