#include <stdio.h>
#include <math.h>
#define pi 3.14
int main ()
{
	float o,a,h,sine,cosine,A,B;
	
	printf("Enter the opposite side =");
	scanf("%f",&o);
	
	printf("Enter the adjacent side =");
	scanf("%f",&a);

    h=sqrt(pow(o,2)+pow(a,2));
    
    A=asin(o/h);
    B=(pi/2)-A;
    
    printf("The angle of the corner with respect to you gave measures of sides = %.2f\n",(180/pi)*A);
    printf("The angle of the other corner = %.2f",(180/pi)*B);
}
