//Insertion of an element in an array
#include<stdio.h>
int main()  {
    int arr[10];
    int i, size, num, pos;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {  scanf("%d", &arr[i]);  }

    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

        for(i=size; i>=pos; i--)
        {  arr[i] = arr[i-1];  }
        arr[pos-1] = num;
        size++; 
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {  printf("%d\t", arr[i]);  }
return 0;
}

