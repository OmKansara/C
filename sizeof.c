#include <stdio.h>
void main ()
{
    int x,y;
    float z;
    double a,b;
    char c;

    printf("The total space required : %d,%d,%d,%d,%d,%d",sizeof(x),sizeof(y),sizeof(z),sizeof(a),sizeof(b),sizeof(c));
}