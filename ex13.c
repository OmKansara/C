/* Write a program to print following series: 1+1/2+1/3+……+1/n  */
#include <stdio.h>
void main ()
{
	int n,i;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("1/%d+",i);
	}
}
