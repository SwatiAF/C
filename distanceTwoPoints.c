//DISTANCE BETWEEN TWO POINTS USING FUNCTIONS

#include <stdio.h>
#include <math.h>
float dist();
int main()
{
    int x1,x2,y1,y2;
    float d;
    printf("Input the values of x1,x2,y1,y2 \n");
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    d= dist(x1,x2,y1,y2);
    printf("The distance is %f \n", d);

    return 0;
}
float dist(int x1,int x2, int y1, int y2)  {
    int x,y;
    float d;
    x = pow(x2-x1,2);
    y = pow(y2-y1,2);
    d = sqrt(x + y);
    return d;
}
