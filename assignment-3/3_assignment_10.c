#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter cost price:\n");
    scanf("%f",&cp);
    printf("Enter selling price:\n");
    scanf("%f",&sp);

    if(cp>sp)
    {
        loss=((cp-sp)*100)/cp;
        printf("loss percentage is %.2f %%",loss);
    }
    else if (sp>cp)
    {
        profit=((sp-cp)*100)/cp;
        printf("profit percentage is %.2f %%",profit);
    }
    else
    printf("No profit no loss");

    return 0;
}