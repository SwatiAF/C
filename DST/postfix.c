//POSTFIX EVALUATION

#include<stdio.h>
#define SIZE 20

int stack[SIZE];
int top=-1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

