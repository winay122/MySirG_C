#include<stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;

    printf("Size of int is: %d bytes\n",sizeof(i));
    printf("Size of float is: %d bytes\n",sizeof(f));
    printf("Size of char is: %d bytes\n",sizeof(c));
    printf("Size of double is: %d bytes\n",sizeof(d));

    return 0;
}