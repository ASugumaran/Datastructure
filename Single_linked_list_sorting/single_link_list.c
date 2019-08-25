/************************************************/
/* Author      :     A.Sugumaran                */
/* Date        :     09-04-2019                 */
/* Filename    :     Single_linked_list.c       */
/* Description :     sorting a list             */
/************************************************/

#include "single_link_list.h"

/*User defined datatype definitions*/
struct node
{
	int regno;
	char *name;
	struct node *next;
};
struct node * head = NULL;
struct node * print_ptr = NULL;
struct node * sort = NULL;
void sort_node();

int i=0;
void print_list();

void insert_node(int data,char *ptr3)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->regno = data;
	ptr->name = ptr3;
	ptr->next = head;
	head = ptr;
	i++;// to check how many values inserted
}

int main()
{
	/* Inserting values */
	insert_node(3,"you");
	insert_node(1,"i");
	insert_node(2,"love");

	printf("\nBefore sorting\n");
	print_list();

	sort_node();

	printf("\nAfter sorting\n");
	print_list();

}

void sort_node()
{
	print_ptr=sort= head;
	int j=0,regno;
	char *name;

	/* It will execute untill sort1*/
	while(sort != NULL)
	{
		/* Everytime it will give 'print_ptr = head' */
		print_ptr = head;
		for(j=0 ;j<i; j++)
		{
			/* Checking condition */
			if(sort->regno < print_ptr->regno)
			{
				//swaping
				regno = print_ptr->regno;
				name = print_ptr->name;
				print_ptr->regno = sort->regno;
				print_ptr->name = sort->name;
				sort->regno = regno;
				sort->name = name;
			}
			/* It moves to next value */
			print_ptr = print_ptr->next;
		}
		sort = sort->next;;
	}
}

void print_list()
{
	int i=0;
	/* In all places head giving starting address of a 'structure node' */
	print_ptr = head;
	while(print_ptr != NULL)
	{
		i++;
		printf("node %d regno %d name %s\n",i,print_ptr->regno,print_ptr->name);
		print_ptr = print_ptr->next;
	}
}
