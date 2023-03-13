#include<stdio.h>
void main ()
{
    int a,b,c,s;

    printf("enter the number A = ");
    scanf("%d", &a);
    
    printf("enter the number B = ");
    scanf("%d", &b);

    printf("enter the number C = ");
    scanf("%d", &c);

    s=a+b+c;

    printf("The sum of three numbers = %d+%d+%d = %d",a,b,c,s);
    
}