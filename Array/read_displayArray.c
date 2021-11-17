//Read and Display n numbers using arrays.


#include<stdio.h>
#include<conio.h>
int main()  {
    int i=0, n, arr[20];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++)
    {
        printf("Element[%d]= ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are : \n");
    for(i=0; i<n; i++)
    { 
        printf("Element[%d]=%d \t", i+1, arr[i]);
    }
    return 0;
}
