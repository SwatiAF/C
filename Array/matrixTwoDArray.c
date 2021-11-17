//3*3 Matrix: 2D Array 


#include<stdio.h>
#include<conio.h>
int main()  {
    int i, j, mat[3][3];
    printf("Enter the elements of the matrix: \n");
    for(i=0; i<3; i++)  
    {
        printf("\n");
        printf("Enter the values in Row%d: \n", i+1);
        for(j=0; j<3; j++)  
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }
    printf("The elements of the matrix are: ");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        printf("\t |%d|", mat[i][j]);
    }
    return 0;
}

