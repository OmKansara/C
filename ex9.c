/* Write a program to find a set of leap year between ranges of years. */
#include <stdio.h>
void main ()
{
	int year,l,u;
	printf("Enter the upper limit = ");
	scanf("%d",&u);
	printf("Enter the lower limit = ");
	scanf("%d",&l);
	for(year=l;year<=u;year++)
		
    if((year%400!=0)&&((year%4==0)||(year%100==0)))		
	printf("%d,",year);
}
