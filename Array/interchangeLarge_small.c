//Interchanging Largest and Smallest element in an array


#include<stdio.h>
void main()  {
    int arr[10], max, min, maxpos, minpos, i, n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    max=arr[0];
    min=arr[0];
    maxpos=0;
    minpos=0;
    for(i=1; i<n; i++)  {
        if(arr[i] > max)  {
            max=arr[i];
            maxpos=i;  }
        if(arr[i] < min)  {
            min=arr[i];
            minpos=i;  }
        }
    temp = arr[maxpos];
    arr[maxpos] = arr[minpos];
    arr[minpos] = temp;
    printf("After interchanging the elements are: ");
    for(i=0; i<n; i++)
        printf("%d \t", arr[i]);
    }
    
