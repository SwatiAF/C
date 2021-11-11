//AVERAGE OF THREE NUMBERS USING FUNCTIONS

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    int a,b,c;
    void avg (int a,int b,int c);
    printf("Enter three integers \n");
    scanf("%d %d %d", &a,&b,&c);
    avg(a,b,c);
}
void avg (int a,int b,int c)
{ 
    float average;
    average=(a+b+c)/3;
    printf("Average is %f",average);
}
