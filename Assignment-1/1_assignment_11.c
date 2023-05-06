#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter time:\n");
    scanf("%d:%d",&h,&m);
    printf("User Input time format-\"%d:%d\"\n",h,m);
    printf("Output format-\"%d hour and %d Minute\"");

    return 0;
}