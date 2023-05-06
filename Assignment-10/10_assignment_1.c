#include<stdio.h>
float area (int);
int main()
{
    int a;
    float res;
    printf("Enter radius of a circle:");
    scanf("%d",&a);

    res=area (a);

    printf("Area of a circle is %0.2f",res);
    return 0;
}
float area (int r)
{
    float ar;
    ar=3.14*r*r;
    return (ar);
}