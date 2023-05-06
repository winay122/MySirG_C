#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter your Name:");
    fgets(str,20,stdin);

    printf("Hellow %s",str);

    return 0;
}