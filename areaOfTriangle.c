//Area of Triangle

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,s, area;
    printf("Input the values of a,b,c \n");
    scanf("%f%f%f", &a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %f \n",area);

    return 0;
}
