#include <stdio.h>
void main ()
{
    int x,y;

    printf("Enter the x and y coordinate of point : ");
    scanf("%d%d",&x,&y);

    if((x>0)&&(y>0))
    {
        printf("The point is in first quadrant.");
    }
    else if((x<0)&&(y>0))
    {
        printf("The point is in second quadrant.");
    }
    else if((x<0)&&(y<0))
    {
        printf("The point is in third quadrant.");
    }
    else if((x>0)&&(y<0))
    {
        printf("The point is in fourth quadrant.");
    }
    else if((x==0)&&(y==0))
    {
        printf("The point is origin itself.");
    }
    else if((x==0))
    {
        printf("The point lies on y-axis.");
    }
    else
    {
        printf("The point lies on x-axis.");
    }
}