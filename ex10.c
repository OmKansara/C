/*Write a program that displays multiplication table of given no.*/ 
#include <stdio.h>
void main ()
{
	int i,n;
	printf("Enter the number of which you want table = ");
	scanf("%d",&i);
	
	for(n=1;n<=10;n++)
	printf("%d*%d=%d\n",i,n,i*n); 
}
