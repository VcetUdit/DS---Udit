#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void peek();

void enqueue(int x)
{
if(rear==-1 && front==-1)
{
		front = rear = 0;
		queue[rear]=x;
}
else if (((rear+1)%N)==front)
{
		printf("Queue is full");
}

else 
{
	rear = (rear+1) % N;
	queue[rear]=x;
}
}

void dequeue()
{
if(front==-1 && rear ==-1)
{
		printf("Queue is Empty");
}
else if (front==rear)
{
		front = rear = -1;
}
else
{
		front = (front+1)%N;
}
}

void display()
{
int i = front;
if(front==-1 && rear==-1)
{
printf("Queue is Empty");
}
else
{
printf("Queue is not empty");
while(i!=rear)
{
printf("%d",queue[i]);
i=(i+1)/N;	
}			
}
printf("%d",queue[rear]);
}

void peek()
{
		printf("%d",queue[front]);
}

void main()
{
	enqueue(2);
	enqueue(3);
	enqueue(5);
	enqueue(6);
	display();
}





