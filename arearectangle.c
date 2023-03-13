#include <stdio.h>

void main ()

{
	int l,b,a;
	
	printf("\nEnter the length of rectangle = ");
	scanf("%d", &l);
	
	printf("Enter the breadth of rectangle = ");
	scanf("%d", &b);
	
	a=l*b;
	
	printf("The area of rectangle = %d*%d = %d\n\n",l,b,a);
	
}