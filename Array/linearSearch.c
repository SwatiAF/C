//Linear Search in an array


#include<stdio.h>
void main()  {
    int num, i, keynum, found=0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements of the array: ");
    for(i=0; i<num; i++)  {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &keynum);
    
    for(i=0; i<num; i++)  {
        if(keynum == array[i])  {
            found=1;
            break;  }
    }
    if(found == 1)
        printf("Element is present in the array at the position %d",i+1);
    else
        printf("Element is not present in the array");
}

