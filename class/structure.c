#include<stdio.h>
#include<string.h>
struct book
{
    int bookId;
    char title[20];
    float price;
};
void display(struct book b)
{
    printf("\n%d %s %.2f",b.bookId,b.title,b.price);
}
struct book input()
{
    struct book b;
    printf("Enter bookId , title and price of book:\n");
    scanf("%d",&b.bookId);
    fflush(stdin);
    fgets(b.title,20,stdin);
    b.title[strlen(b.title)-1]='\0';
    scanf("%f",&b.price);
    return b;
}
int main()
{
    struct book b1={5,"Cpp",500.0f};
    struct book b2;
    b2.bookId=1;
    strcpy(b2.title,"JAVA");
    b2.price=234.05;

    struct book b3;
    b3=input();
    display(b1);
    display(b2);
    display(b3);

    return 0;
}