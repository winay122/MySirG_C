#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int i,j,flag,count=1;
    for(i=2;count<=n;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
        printf("%d ",i);
        count++;
        }
    }
    return 0;
}