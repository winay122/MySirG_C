#include<stdio.h>
int main()
{
    int day;
    printf("Enter day Number:");
    scanf("%d",&day);

    switch(day)
    {
        case 1 : printf("today is Monday");
        break;
        case 2 : printf("today is Tuesday");
        break;
        case 3 : printf("today is Wednesday");
        break;
        case 4 : printf("today is Thursday");
        break;
        case 5 : printf("today is Friday");
        break;
        case 6 : printf("today is Saturday");
        break;
        case 7 : printf("today is Sunday, Fun day");
        break;
        default : printf("Invalid input");
        
    }
    return 0;
}