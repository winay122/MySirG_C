#include<stdio.h>
int comb(int, int);
long fact(long);
void pascal(int);
int main()
{
    int n;
    printf("ENter no of rows in triangle: ");
    scanf("%d",&n);
    pascal(n);
    
    return 0;
}

void pascal(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=0;j<=(n+i);j++)
        {
            if(j<(n-i) && k)
            {
                printf(" ");
                k=0;
            }
            else
            {
            printf("%d",comb(i,j));
            k=1;
            }
        }
        printf("\n");
    }

}

long fact(long n)
{
    int i;
    long sum=1;
    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
int comb(int a, int b)
{
    int res;
    res=fact (a)/(fact (b) * fact (a-b));
    return res;
}
