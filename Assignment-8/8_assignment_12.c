
#include<stdio.h>
int main()
{
    int i,j;
    char count;
    for(i=1;i<=4;i++)
    {
         count='A';
        for(j=1;j<=7;j++)
        {
           
            if(j>=i && j<=8-i)
            {
                printf("%c",count);
                j<4?count++:count--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
} 