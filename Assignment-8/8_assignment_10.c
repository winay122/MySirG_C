#include<stdio.h>
int main()
{
    int i,j,count;

    for(i=1;i<=4;i++)
    {
        count=1;
        for(j=1;j<=7;j++)
        {
            if(j>=6-i && j<=2+i)
            {
            printf(" ");
            if(j==4)
            count--;
            }
            else
            {
                printf("%d",count);
                j<4?count++:count--;
            }
        }
        printf("\n");
    }
    return 0;
}