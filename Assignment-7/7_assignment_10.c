#include<stdio.h>
#include<math.h>
int main()
{
    int i,temp,count=0,rem,res=0;

    for(i=1;i<=1000;i++)
    {
        count=0,res=0;
        temp=i;
        while(temp>0)
        {
            temp=temp/10;
            count++;
        }
        temp=i;
        while (temp>0)
        {
            rem=temp%10;
            res=res+pow(rem,count);
            temp=temp/10;
        }
        if(res==i)
        printf("%d ",i);
        
    }
    
    return 0;
}