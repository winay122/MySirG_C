// Write a function to swap values of two in variables of calling function. (TSRS)

void swap(char **x,char **y); 

#include<stdio.h>
int main()
{
    char *a[20] , *b[20];
    printf("Enter two strings: ");
    gets(a);
    gets(b);

    swap(&a,&b);
    printf("a = %s , b = %s",a,b);

    return 0;
}

void swap (char **x, char **y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}