//Largest and Smallest elements in an array


#include <stdio.h>
int main()  {
    int a[20], i, n, large, small;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; ++i)  {
        printf("\nEnter element%d: ", i + 1); 
        scanf("%d", &a[i]);  }
    
    large=small=a[0];
    
    for(i=1; i<n; ++i)  {
        large=a[i];
        if(a[i]<small)
        small=a[i];  }
    printf("The Largest element is %d \n", large);
    printf("The Smallest element is %d \n", small);
return 0;
}




