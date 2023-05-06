#include<stdio.h>
int main()
{
    int i,j;
    char alpha;

    for(i=1;i<=7;i++)
    {
        alpha='A';
        for(j=1;j<=13;j++)
        {
            if(j>=9-i && j<=5+i)
            {
                printf(" ");
                if(j==7)
                alpha--;
            }
            else
            {
                printf("%c",alpha);
                j<7?alpha++:alpha--;
            }
        }
        printf("\n");
    }
    return 0;
}