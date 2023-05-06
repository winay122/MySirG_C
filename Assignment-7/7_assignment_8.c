#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=n+1;1;i++)
    {
        for(j=2;j<=i;j++)

        {
            if(i%j==0)
            break;
        }
        if(i==j)
        {
        printf("%d ",i);
        break;
        }
    }
    return 0;
}