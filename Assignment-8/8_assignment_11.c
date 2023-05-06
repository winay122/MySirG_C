#include<stdio.h>
int main()
{
    int i,j;
    char alpha;

    for(i=1;i<=5;i++)
    {
        alpha='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",alpha);
                j<5?alpha++:alpha--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}