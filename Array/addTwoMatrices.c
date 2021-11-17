//Addition of two Matrices


#include<stdio.h>
#include<conio.h>
void main()  {
    int a[2][2], b[2][2], c[2][2], i, j;
    for(i=0; i<2; i++)  {
        printf("Enter the values in Row%d: ",i);
        for(j=0; j<2; j++)  {
            printf("\n a[%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);  }
    }
    for(i=0; i<2; i++)  {
        printf("Enter the values in Row%d: ",i);
        for(j=0; j<2; j++)  {
            printf("\n b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);  }
    }
    for(i=0; i<2; i++)  {
    for(j=0; j<2; j++)  {
        printf("%5d", a[i][j] + b[i][j]);  }
        printf("\n");
    }
    
}

