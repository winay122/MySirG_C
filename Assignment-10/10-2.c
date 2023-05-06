#include<stdio.h>
float SI(int, int, int);
int main()
{
    int p,r,t;
    float s;
    printf("Enter Principal, rate and time: ");
    scanf("%d%d%d",&p,&r,&t);
    s=SI(p,r,t);
    printf("Simple intrest= %.2f",s);
}

float SI(int p,int r,int t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}