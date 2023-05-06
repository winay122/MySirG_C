#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Swap values of a=%d and b=%d",a,b);
    return 0;
}

void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;

}