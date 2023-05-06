#include<stdio.h>
#include<string.h>
struct student
{
    int studentId;
    char Name[20];
    float cgpa;
};
struct student input()
{
    struct student s;
    printf("Enter your ID , Name and cgpa:\n");
    scanf("%d",&s.studentId);
    fflush(stdin);
    fgets(s.Name,20,stdin);
    s.Name[strlen(s.Name)-1]='\0';
    scanf("%f",&s.cgpa);
    return s;
}
void display(struct student st)
{
    printf("\n%d %s %.2f",st.studentId,st.Name,st.cgpa);
}
int main()
{
   int i; 
   struct student s[5];
    for(i=0;i<5;i++)
        s[i]=input();
    for(i=0;i<5;i++)
        display(s[i]);
    
    return 0;
}