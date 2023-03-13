#include <stdio.h>
void main ()
{
    int a;

    printf("Enter the percentage : ");
    scanf("%d",&a);
    
    if(a>eww90)
    {
        printf("Grade - A+");
    }
    else if (a>80)
    {
        printf("Grade - A");

    }
    else if(a>70)
    {
        printf("Grade - B+");
    }
    else if(a>60)
    {
        printf("Grade - B");

    }
    else if(a>50)
    {
        printf("Grade - C+");

    }
    else if(a>40)
    {
        printf("Grade - C");
    }
    else
    {
        printf("Grade - F");
    }
    
}