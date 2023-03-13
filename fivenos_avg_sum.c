#include <stdio.h>
void main ()
{
    int a,b,c,d,e,s,avg;

    printf("Enter the five numbers :");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

    s=a+b+c+d+e;
    avg=s/5;

    printf("The sum of the five numbers is : %d \n" ,s);
    printf("The average of the five numbers is : %d" ,avg);    
}