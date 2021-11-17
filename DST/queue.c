//QUEUE OPERATIONS

#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int q_arr[MAX];
int rear=-1, front=-1;

void insert()  {
    int add;
    if(rear==MAX-1)
    printf("Q overflow");
    else
    {
        if(front==-1)
        front=0;
        printf("Insert Elements: \n");
        scanf("%d", &add);
        rear++;
        q_arr[rear] = add;
    }
}

void delete()  {
    if(front==-1 || front>rear)
    {
        printf("Q underflow");
        return;
    }
    else
    {
        printf("deleted element: %d \n", q_arr[front]);
        front++;
    }
}

void display()  {
    int i;
    if(front==-1)
    printf("Q empty");
    else
    {
        printf("Queue is: \n");
        for(i=front; i<=rear; i++)
        printf("%d \n", q_arr[i]);
    }
}

void main()  {
    int choice;
    while(1) 
    {
        printf("1.Insert \n 2.Delete \n 3.Display \n 4.Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("Invalid Choice");
            
        }
    }
}
