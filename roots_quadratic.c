#include <stdio.h>
#include <math.h>
void main ()
{
      float x1,x2,a,b,c,d;
      
      printf("Enter the values of a, b and c : ");
      scanf("%f%f%f",&a,&b,&c);
      w
      d= b*b -4*a*c;
      
      if(d>=0)
      {
      x1=(-b+sqrt(d))/2*a;
      x1=(-b+sqrt(d))/2*a;
      printf("The roots of the equation are : %f and %f",x1,x2);
      }
      else
      {
        printf("Roots for this equation are imaginery or no real roots.");
      }
}