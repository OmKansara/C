#include <stdio.h>
void main ()
{
    float k,m,i,f;

    printf("Enter the distance in kilometres = ");
    scanf("%f", &k);

    m=1000*k;
    i=39370.1*k;
    f=3281*k;

    printf("The distance in metres : %.2f\n",m);
    printf("The distance in inches : %.2f\n",i);
    printf("The distance in feets : %.2f\n",f);
}