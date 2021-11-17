// C Program to write a file, read from it and print its data


#include<stdio.h>
int main()  {
    FILE *fp;
    typedef struct student  {
    char name[20];
    int roll_no;
    char dept[20];
    } STUDENT;
    STUDENT stud1;
    fp = fopen("BMSCE.txt", "w");
    if(fp==NULL)
    {
        printf("The file could not be opened");
        return 0;
    }
    printf("Enter the Student Name: ");
    scanf("%s", &stud1.name);
    printf("Enter the Roll Number: ");
    scanf("%d", &stud1.roll_no);
    printf("Enter the Department name: ");
    scanf("%s", &stud1.dept);
    
    printf("Student Details: \n");
    printf("Name: %s \n", stud1.name);
    printf("Roll Number: %d\n", stud1.roll_no);
    printf("Department: %s\n", stud1.dept);
    
    fprintf(fp, "%s %d %s", stud1.name, stud1.roll_no, stud1.dept);
    fclose(fp);
        
    return 0;
}


