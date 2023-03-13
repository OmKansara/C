#include <stdio.h>
int main ()
{
    int i,fac=1,a=1;
    printf("Enter the number = ");
    scanf("%d",&i);

    while(a<=i)
    {
        fac=fac*a;
        a++;
    }
    printf("Factorial of %d = %d",i,fac);
    return 0;
}