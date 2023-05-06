// Check whether given email id is valid or not

#include<stdio.h>
int main()
{
    char a[5] [20];
    int i;

    for(i=0;i<3;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<3;i++)
    {
        if(strchr(a[i],'@') !=0)
        {
            printf("%s\n",a[i]);   
        }
    }
    return 0;
}