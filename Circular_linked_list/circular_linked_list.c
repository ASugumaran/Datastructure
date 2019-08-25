/************************************************/
/* Author      :     A.Sugumaran                */
/* Date        :     20-08-2019                 */
/* Filename    :     Circular_linked_list.c       */
/* Description :     Circular_linked_list         */
/************************************************/

//Including header file
#include"circular_linked_list.h"

//structure
struct node
{
	int data;
	struct node *next;
};

//At first head need to be NULL
struct node *head=NULL;
struct node *print_ptr=NULL;

int main()
{
	//1st value inserting
	struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
	ptr1->data = 1;
	ptr1->next = NULL;

	//2nd value
	struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
	ptr2->data = 2;
	ptr2->next = NULL;

	//3rd value
	struct node *ptr3 = (struct node *)malloc(sizeof(struct node));
	ptr3->data = 3;
	ptr3->next = NULL;

	head = ptr1;
	ptr1->next = ptr2;
	ptr2->next = ptr3;
	ptr3->next = ptr1;//at last pointing to first value

	printf("Before Deleting\n");

	print_ptr = head;
	while(print_ptr != NULL)
	{
		printf("Data %d\n",print_ptr->data);
		print_ptr = print_ptr->next;
	}

	//then it pointed to a 2nd value 3rd value will be deleted
	prt2->next = ptr1;

	print_ptr = head;
	while(print_ptr != NULL)
	{
		printf("Data %d\n",print_ptr->data);
		print_ptr = print_ptr->next;
	}

}
