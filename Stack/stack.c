/************************************************/
/* Author      :     A.Sugumaran                */
/* Date        :     23-08-2019                 */
/* Filename    :     Stack.c                    */
/* Description :     Stack                      */
/************************************************/

//Included header
#include "stack.h"

#define MAX 5

int count = -1;
int arr[MAX];

//Function prototypes
int full(void);
int empty(void);

//Inserting (or) pushing data to an array
void push(int data)
{
	if(full())
	{
		//It will execute, if an array is full
		printf("Stack is full\n");
	}
	else
	{
		//Ifit not full,start to insert data to an array
		count++;
		arr[count]=data;
	}
}

//Deleting (or) pop a single data in an array
void pop(void)
{
	if(empty())
	{
		//If it is empty means 
		printf("Stack is empty\n");
	}
	else
	{
		//If it is not empty
		count = count-1;
	}
}

//Checking if an array is full or not
int full()
{
	if(count == (MAX-1))
		return 1;
	else
		return 0;
}

//Checking if an array is empty or not
int empty()
{
	if(count == -1)
		return 1;
	else
		return 0;

}

int main()
{
	//Inserting value in an array
	push(10);
	push(11);
	push(12);
	push(13);
	push(14);

	printf("Before pop\n");
	int i;
	for(i=0;i<count+1;i++)
		printf("%d\n",arr[i]);

	//Deleting
	pop();
	printf("After pop\n");
	for(i=0;i<count+1;i++)
		printf("%d\n",arr[i]);
}
