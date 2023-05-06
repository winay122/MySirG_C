#include<stdio.h>

void input(int b[],int n)
{
    int i;
    printf("Enter %d number:",n);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    printf("%d ",b[i]);

}

int main()
{
    int a[6];
    input(a,6);
    return 0;
}