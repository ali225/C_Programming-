#include <stdio.h>
#include <math.h> //used for sqrt & pow functions

int main()
{
    int x = 4;
    int y = pow(x,2);
    printf("x power 2 equals %d\n",y);
    y = sqrt(x);
    printf("Square root of x equals %d\n",y);
    return 0;
}
