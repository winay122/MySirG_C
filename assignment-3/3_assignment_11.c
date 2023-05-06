#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of five subjects: \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>32&&b>32&&c>32&&d>32&&e>32)
    printf("passed");
    else
    printf("failed");

    return 0;
}