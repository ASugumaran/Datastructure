/************************************************/
/* Author      :     A.Sugumaran                */
/* Date        :     23-08-2019                 */
/* Filename    :     Queue.c                    */
/* Description :     Queue                      */
/************************************************/

/* Included header files */
#include"queue.h"

#define MAX 6

int arr[MAX];
int front =0;
int rear = -1;
int count = 0;

//Gets the element at the front of the queue without removing it.
int peek()
{
	return arr[front];
}

//Checks if the queue is empty.
int empty()
{
	if(count == 0)
		return 1;
	else
		return 0;
}

//Checks if the queue is full.
int full()
{
	if(count == MAX )
		return 1;
	else
		return 0;
}

//Checks the size of queue
int size()
{
	return count;
}

//inserting value to the queue
void insert(int data)
{
	if(full()==0)
	{
		if(rear == MAX-1)
			rear = -1;
		arr[++rear] = data;
		count++;
	}
	else
		printf("Queue is full\n");
}

//To remove a data at first
int removedata()
{
	int data = arr[front++];
	if(front == MAX)
		front =0;
	count--;
	return data;
}

int main()
{
	//Inserting data
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);

	int num = removedata();
	printf("%d \n",num);

	insert(7);
	//to Remove data which is first get inside the queue
	while(!empty())
	{
		int n = removedata();
		printf("%d ",n);
	}
}
