#include <stdio.h>

int main()
{
    int f;
    float c;
    printf("Input the temperature in Fahrenheit: ");
    scanf("%d",&f);
    c=((f-32)*5)/9;
    printf("The temperature in Celsius is %0.02f \n", c);

    return 0;
}
