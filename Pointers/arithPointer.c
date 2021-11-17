//Arithmetic Operations on two integers using pointers


#include<stdio.h>
int main()  {
    int num1, num2;
    int *pnum1 = &num1, *pnum2 = &num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", pnum1, pnum2);
    int a, b, c, d, e;
    a = (*pnum1 + *pnum2);
    b = (*pnum1) - (*pnum2);
    c = (*pnum1)*(*pnum2);
    d = (*pnum1)/(*pnum2);
    e = (*pnum1)%(*pnum2);
    printf("Addition = %d\n Subtraction = %d\n Multiplication = %d\n Division = %d\n Remainder=%d", a, b, c, d, e);
    return 0;
}

