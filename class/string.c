#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="Vinay";
    int i;
    for(i=0;str[i];i++)
    printf("%c",str[i]);
    printf("\n%s",str);
    printf("\n%d",strlen(str));
    printf("\n%s",struor(str));

    

    return 0;
}