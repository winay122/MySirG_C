#include<stdio.h>
int main()
{
    int n,i,res=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    
  while (n!=0)
  {
    res=(res*10)+(n%10);
    n=n/10;
  }
  printf("The reverse resulting Number is:%d",res);
 
 return 0; 
}