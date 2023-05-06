#include<stdio.h>
int main()
{
    float INR;
    printf("Enter INR amount:\n");
    scanf("%f",&INR);

    printf("%f INR is equal to %f USD.",INR,INR/76.23);

    return 0;
}