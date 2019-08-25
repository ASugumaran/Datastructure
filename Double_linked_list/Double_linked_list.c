/************************************************/
/* Author      :     A.Sugumaran                */
/* Date        :     17-08-2019                 */
/* Filename    :     Double_linked_list.c       */
/* Description :     Double_linked_list         */
/************************************************/

//Including header file
#include"Double_linked_list.h"

/*Main structure*/
struct node
{
	struct node *prev;
	int num;
	char *name;
	struct node *next;
};

/*Assigning head = NULL */
struct node *head = NULL;
int main()
{

	int i=0;
	/*Inserting first value*/
	struct node *ptr1 = (struct node *)malloc(sizeof(struct node ));

	ptr1->num = 1;
	ptr1->name = "sugu";
	ptr1->prev = NULL;
	ptr1->next = NULL;

	/*Inserting second value*/
	struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
	ptr2->num = 2;
	ptr2->name = "maran";
	ptr2->prev = ptr1;
	ptr2->next = NULL;

	/*It will point that 2nd value after printed the 1st value*/
	ptr1->next = ptr2;

	/*It will point to a 1st value*/
	head = ptr1;

	printf("Before Deletion\n");

	/*Assigning to start from 1st value*/
	struct node *print_ptr = head;
	
       /*Printing loop*/	
	while(print_ptr != NULL)
	{
		i++;
		printf("Node %d Num %d Name %s\n",i,print_ptr->num,print_ptr->name);
		print_ptr = print_ptr->next;
	}

	/*It will point that only 1st value*/
	ptr1->next = NULL;
	
	printf("After deletion\n");
	/*One more time need to assign because print_ptr incremented before in printing loop*/
	print_ptr = head;	
	i = 0;
       /*Printing loop*/	
	while(print_ptr != NULL)
	{
		i++;
		printf("Node %d Num %d Name %s\n",i,print_ptr->num,print_ptr->name);
		print_ptr = print_ptr->next;
	}
	
}
