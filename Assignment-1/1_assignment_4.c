#include<stdio.h>
int main()
{
    float a;
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is %.2f having the radius %d",a,r);

    return 0;
}