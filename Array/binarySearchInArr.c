//BINARY SEARCH IN AN ARRAY

#include<stdio.h>
#include<conio.h>
int main()  {
    int arr[10], num, i, n, pos=-1, start, end, middle, found=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)  {
        scanf("%d", &arr[i]); 
    }
    printf("Enter the element that has to be searched: ");
    scanf("%d", &num);
    
    start=0, end= n - 1;
    while(start <= end)  {
        middle= (start + end)/2;
        if(arr[middle] == num)  {
            printf("\n %d is present in the array at position %d", num, middle);
            found=1;
            break;  }
    else if(arr[middle] > num)
        end= middle - 1;
    else
        start = middle + 1;
    }
    if(start > end && found == 0)
        printf("\n %d does not exist in the array", num);
    return 0;
}
