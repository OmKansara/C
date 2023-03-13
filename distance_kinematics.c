#include <stdio.h>
#include <math.h>
void main ()
{
	float u,a,d,t;
	t=10;
	
	printf("Enter the initial velocity =");
	scanf("%f",&u);
	
	printf("\nEnter the constant acceleration=");
	scanf("%f",&a);
	
	d=u*t+(1*a*pow(t,2))/2;
	
	printf("\nThe distance travelled =%.2f",d);
}
