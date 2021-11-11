//LARGEST OF THREE NUMBERS

#include <stdio.h>

int main()
{
    int a,b,c,big;
    printf("Enter the values of three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    big= a>b? (a>c?a:c):(b>c?b:c);
    printf("The largest of three numbers is %d \n",big);

    return 0;
}

