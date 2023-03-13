#include <stdio.h>
#include <string.h>
void main ()
{
    char s1[100],s2[100],s3[100];
	printf("Enter first name : ");
	gets(s1);
	printf("Enter middle name : ");
	gets(s2);
	printf("Enter last name : ");
	gets(s3);
	printf("\n Entered full name : %s",strcat(s1,strcat(s2,s3)));	
} 
