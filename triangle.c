#include <stdio.h>
void main ()
{
    int a,b,c;

    printf("Enter the sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);

    if((a==b)&&(b==c))
    {
        printf("The triangle is Equilateral.");
    }
    else if((a==b)||(b==c)||(a==c))
    {
        printf("The triangle is Isoceles.");
    }
    else
    {
        printf("The triangle is Scalene.");
    }
}