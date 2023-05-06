#include<stdio.h>
int main()
{
    int month;
    printf("Enter month's number: ");
    scanf("%d",&month);

    if(month==1 || month==3 || month==5 || month==7 || month==8 ||month==10 || month==12)
    printf("There are 31 days in this month");
    else if(month==2)
    printf("There are 27/28 days in this month");
    else
    printf("There are 30 days in this month");

    return 0;

}