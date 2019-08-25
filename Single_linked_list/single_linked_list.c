/************************************************/
/* Author      :     A.Sugumaran                */
/* Date        :     17-08-2019                 */
/* Filename    :     Single_linked_list.c       */
/* Description :     Single_linked_list         */
/************************************************/

//Including header file
#include"single_linked_list.h"

//Printing Single linked list function
void print_list();

//structure
struct node
{
	char data;
	struct node *next;
};

//At first head need to be NULL
struct node *head=NULL;
struct node *print_ptr=NULL;

int main()
{
	//Inserting Data 
	struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
	ptr1->data = 'A';
	ptr1->next = NULL;

	//Inserting Data 
	struct node *ptr2 = (struct node *)malloc (sizeof(struct node));
	ptr2->data = 'B';
	ptr2->next = NULL;

	head = ptr1;
	//Pointing 1st struct to next struct
	ptr1->next = ptr2;

	//Printing Structure
	printf("Before insertion\n");
	print_list();

	//Inserting Data 
	struct node *insert_ptr = (struct node *)malloc(sizeof(struct node));
	insert_ptr->data = 'C';
	insert_ptr->next = NULL;

	ptr2->next = insert_ptr;

	//Printing Structure
	printf("After insertion\n");
	print_list();

	//Deleting
	ptr2->next = NULL;

	printf("After deletion\n");
	print_list();

	//Free the malloc space
	free(ptr1);
	free(ptr2);
	free(insert_ptr);
}
void print_list()
{
	int index=0;
	print_ptr = head;
	while(print_ptr!=NULL)
	{
		//Index value incrementing
		index++;
		//Printing index and data
		printf("Node Index %d Data value %c\n",index,print_ptr->data);
		//Each time assigning next value in structure
		print_ptr=print_ptr->next;
	}
}
