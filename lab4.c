#include <stdio.h>

#define PI 3.14

int main()
{
    float radious,area,circumference;
    printf("Enter radious  \n");
    scanf("%f",&radious);
    area=PI*radious*radious;
    circumference=2*PI*radious;
    printf("Circle Area=%f\nCircle Circumference=%f\n",area,circumference);
    return 0;
}
