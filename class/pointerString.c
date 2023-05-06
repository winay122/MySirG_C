#include<stdio.h>
int length(char *p);

int main()
{
    int l;
    char str[10];
    printf("Enter your name:");
    fgets(str,10,stdin);
    l=length(str);
    printf("Length of Your name is %d.",l);

    return 0;
}

int length(char *p)
{ 
    int i;
    for(i=0;*(p+i);i++);
    return i;
}