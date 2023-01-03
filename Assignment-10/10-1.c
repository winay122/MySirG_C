#include<stdio.h>
float ar(int);

int main()
{
    int r;
    float area;
    printf("Enter length of radius: ");
    scanf("%d",&r);
    area=ar(r);
    printf("Area of circle is: %.2f",area);

    return 0;
}

float ar(int a)
{
    float area;
    area=3.14*a*a;
    return area;
}