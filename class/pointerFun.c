#include<stdio.h>
void input(int*,int);
void display(int *,int);

int main()
{
    int a[10];
    input(a,10);
    display(a,10);
    return 0;
}

void input(int *p,int size)
{
    int i;
    printf("Enter %d numbers:",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
}

void display(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
}