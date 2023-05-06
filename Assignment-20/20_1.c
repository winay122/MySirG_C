// Write a function to swap values of two in variables of calling function. (TSRS)

void swap(int*,int*); 

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("a = %d , b = %d",a,b);

    return 0;
}

void swap (int* x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}