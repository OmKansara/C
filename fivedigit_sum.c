#include <stdio.h>
void main ()
{
	int num,f,s,t,fo,fi;
	
	printf("Enter the 5 digit number =");
	scanf("%d",&num);
	
	fi=num;
	f=fi/10000;
	fi=fi%10000;
	
	s=fi/1000;
	fi=fi%1000;
	
	t=fi/100;
	fi=fi%100;
	
	fo=fi/10;
	fi=fi%10;
	
	printf("The sum of the five digits of entered number =%d",(f+s+t+fo+fi));
}
