#include <stdio.h>
void main ()
{
    int a;

    printf("Enter the number = ");
    scanf("%d", &a);

    if(a>0)
    {
        printf("%d is positive number.",a);
    }
    else if(a<0)
    {
        printf("%d is negative number.",a);
    }
    else
    {
        printf("%d is zero.",a);
    }
}