//SMALLEST ELEMENT IN AN ARRAY

#include<stdio.h>
 
int main() {
   int arr[30],i,n;
 
   printf("\nEnter no of elements :");
   scanf("%d",&n);
   
   int smallest= arr[0];
    int largest= arr[0];
   
   for (i=0; i<n; ++i) {
      printf("Enter Number%d:  ", i + 1);
      scanf("%d", &arr[i]);
   }
 
   for (i=0; i<n; ++i) {
      if (arr[0] < arr[i]) {
          smallest = arr[0];
      }
   }
      for (i=0; i<n; ++i) {
      if (arr[0] > arr[i]) {
          largest = arr[0];
      }
    }
   printf("Smallest Element : %d \n",smallest);
   printf("Largest Element: %d", largest);
   return 0;
}






