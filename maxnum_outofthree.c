#include <stdio.h>
int main ()
{   int a,b,c,max;

    printf("Enter the three numbers =");
    scanf("%d%d%d",&a,&b,&c);

    max=(a>b)&&(a>c)?a :(c>a)?c:b;

    printf("The max. number here is %d",max);
}