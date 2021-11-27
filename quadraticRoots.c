//Roots of a Quadratic equation.

#include <stdio.h>
#include <math.h>
int main () {
    double a, b, c, D, root1, root2, real, imag;
    printf("Enter the coeffients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D= b*b - 4*a*c;
    
    if(D > 0)  {
        root1 = (-b + sqrt(D))/(2*a);
        root2=(-b - sqrt(D))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf \n", root1, root2);  }
    else if(D==0)  {
        root1 = root2 = -b / (2*a);
        printf("root1 = root2 = %.2lf \n", root1);  }
    else  {
        real= -b/(2*a);
        imag=sqrt(-D)/(2*a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi \n", real, imag, real, imag);
    }
return 0;  }
    


