//Student Details


#include<stdio.h>
#include<conio.h>
int main()  {
    struct student  {
        int roll_no;
        char name[20];
        char section[20];
        char dept[20];
        int fees;
        int marks;
    };
    struct student stud[50];
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)  {
        printf("Details of Student %d \n", i);
        printf("Roll Number: ");
        scanf("%d", &stud[i].roll_no);
        printf("Name: ");
        scanf("%s", &stud[i].name);
        printf("Section: ");
        scanf("%s", &stud[i].section);
        printf("Department: ");
        scanf("%s", &stud[i].dept);
        printf("Fees: ");
        scanf("%d", &stud[i].fees);
        printf("Total Marks: ");
        scanf("%d", &stud[i].marks);  
    }
    if(stud[0].marks > stud[1].marks)  {
        printf("Highest marks is scored by Student of the following details: \n");
        printf("Roll Number: %d \n", stud[0].roll_no);
        printf("Name:%s \n", stud[0].name);
        printf("Section:%s \n", stud[0].section);
        printf("Department:%s \n", stud[0].dept);
        printf("Fees:%d \n", stud[0].fees);
        printf("Total Marks:%d \n", stud[0].marks);  }
        printf("\n");
    if(stud[0].marks < stud[1].marks)  {
        printf("Highest marks is scored by Student of the following details: \n");
        printf("Roll Number: %d \n", stud[1].roll_no);
        printf("Name:%s \n", stud[1].name);
        printf("Section:%s \n", stud[1].section);
        printf("Department:%s \n", stud[1].dept);
        printf("Fees:%d \n", stud[1].fees);
        printf("Total Marks:%d \n", stud[1].marks); 
    }
    return 0;
}
    




