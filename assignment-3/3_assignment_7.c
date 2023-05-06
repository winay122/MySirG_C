#include<stdio.h>
#include<math.h>
int main()

{
   float a,b,c,root1,root2,real,img;
   printf("Enter value of a,b,c of a quadratic equation:\n");
   scanf("%f%f%f",&a,&b,&c);

   int D=(b*b)-4*a*c;
   
   if(D>0)
   {
    root1=(-b + sqrt(D)/(2*a));
    root2=(-b - sqrt(D)/(2*a));
    printf("root 1 =%.2f \n",root1);
    printf("root 2 =%.2f \n",root2);
   }

   else if(D==0)
   {
    root1=-b/(2*a);
    printf("root 1 = root 2 =%.2f ",root1);    
   }

   else
   {
    real= -b/(2*a);
    img= sqrt(-D)/(2*a);

    printf("root 1 real part is %.2f and img part is %.2f\n",real,img);
    printf("root 2 real part is %.2f and img part is %.2f\n",real,-img);

   }

return 0;   
}