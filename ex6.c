#include <stdio.h>
#include <string.h>
void main ()
{
	char s[100];
	int i,count=1;
	printf("Enter the string : ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	  if(s[i]==' ')
	  count++;
	  else
	  continue;
	printf("The total number of words in string : %d",count);  
       
}
