#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Entre two numbers:");
    scanf("%d%d",&a,&b);

    int max= (a>b)?a:b;

    for(i=max;i<=a*b;i+=max)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM is %d",i);
            break;
        }
    }
    return 0;
}