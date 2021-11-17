//Book Details


#include<stdio.h>
#include<conio.h>
int main() {
    struct book_details {
        char title[20];
        char author[20];
        int pages;
        float price;
        char DO_Publ;
    };
    struct book_details book[10];
    int n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)  {
        printf("Details of Book%d \n", i+1);
        printf("Title: ");
        scanf("%s", &book[i].title);
        printf("Author: ");
        scanf("%s", &book[i].author);
        printf("Number of Pages: ");
        scanf("%d", &book[i].pages);
        printf("Price: ");
        scanf("%f", &book[i].price);
        printf("Date of Publication: ");
        scanf("%s", &book[i].DO_Publ);
    }
    printf("\n");
    if(book[0].price > book[1].price && book[0].price > book[2].price)  {
        printf("Details of book with highest price: \n");
        printf("Title: %s \n", book[0].title);
        printf("Author: %s \n", book[0].author);
        printf("Number of Pages: %d \n", book[0].pages);
        printf("Price: %f \n", book[0].price);
        printf("Date of Publication: %s \n", book[0].DO_Publ);
   }
   if(book[1].price > book[0].price && book[1].price > book[2].price)  {
        printf("Details of book with highest price:  \n");
        printf("Title: %s \n", book[1].title);
        printf("Author: %s \n", book[1].author);
        printf("Number of Pages: %d \n", book[1].pages);
        printf("Price: %f \n", book[1].price);
        printf("Date of Publication: %s \n", book[1].DO_Publ);
   }
   if(book[2].price > book[0].price && book[2].price > book[1].price)  {
        printf("Details of book with highest price:  \n");
        printf("Title: %s \n", book[2].title);
        printf("Author: %s \n", book[2].author);
        printf("Number of Pages: %d \n", book[2].pages);
        printf("Price: %f \n", book[2].price);
        printf("Date of Publication: %s \n", book[2].DO_Publ);
   }
   return 0;
}





