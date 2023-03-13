#include <stdio.h>
void main ()
{
    int age;

    printf("Enter the age : ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("The candidate is elgible to vote.");
    }
    else
    {
        printf("The candidate is not eligible to vote.");
    }
}