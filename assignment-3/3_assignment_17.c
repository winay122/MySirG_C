#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of a teiangle: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b+c || b>a+c || c>a+b)
    printf("Triangle is not valid");
    else
    printf("Triangle is valid");

    return 0;
}