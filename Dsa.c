linear queue 
wap to implement a linear queue using an array . perform the following operation .
insert 10,20and 30 into the queue .
  delete two element from the front .
insery 40 into the rear .
display the remaining elements 


#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert(int value)
{
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
    }
}

void delete()
{
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else
    {
        printf("
