#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,Area;
    scanf("%f",&radius);
    Area = PI*radius*radius;
    printf("Area: %.2f",Area);
    return 0;
}