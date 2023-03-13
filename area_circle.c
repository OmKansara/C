#include <stdio.h>
void main ()
{
    float a,r,p;
    p=3.14;

    printf("Enter radius of circle = ");
    scanf("%f", &r);

    a=p*r*r;

    printf("The area of circle = %.2f",a);
}