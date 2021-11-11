//AREA OF CIRCLE USING FUNCTIONS

#include <stdio.h>
#include <math.h>

float area_of_circle(float radius_circle);
int main()
{
   float radius;
   printf("Enter the radius of circle \n");
   scanf("%f", &radius);
   printf("Area of circle is %.2f",area_of_circle(radius));

    return 0;
}
float area_of_circle(float radius_circle)  
{
    float area_circle;
    area_circle=3.14*radius_circle*radius_circle;
    return area_circle;
}

