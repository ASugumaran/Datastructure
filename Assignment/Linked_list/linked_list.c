/***********************************************************/
/*  Author       : Sugumaran_A                             */
/*  File_Name    : Linked_list.c                           */
/*  Description  : Linked list                             */
/*  Date         : 11-05-2020                              */
/***********************************************************/

#include "linked_list.h"

//self referencing pointer

struct database{
	int roll_no;
	char name[20];
	struct database *next; //self referencing pointer
};

struct database *head = NULL;

void sort_rollno(void);
void add_element(void);
void print_element(void);

int main()
{
	while(1)
	{
		printf("Options:\nEnter the choice\n1.Add element\n2.Print element\n3.Exit\n");

		int input;
		scanf("%d",&input);
		if(input == 1)
			add_element();
		else if(input == 2)
		{
			sort_rollno();
			print_element();
		}
		else if(input == 3)
			exit(EXIT_SUCCESS);
		else
			printf("Not in choice\n");
	}

}

void add_element(void)
{
	struct database *ptr = head;
	struct database *ptr_prev = NULL;
	struct database *temp = (struct database *)malloc(sizeof (struct database));

	int ret;

	printf("%s : Enter tha Name\n",__func__);
	scanf("%s",temp->name);
	temp->next = NULL;

	if(head == NULL){
		head = temp;
		head -> next = NULL;
		ptr = head;
	}
	else {
		while(ptr != NULL) {
			ret = strcmp(ptr->name, temp->name);
			if(ret < 0) {
				ptr_prev = ptr;

				if(ptr-> next == NULL){
					ptr ->next = temp;
					return;
				} else {
					ptr = ptr-> next;
				}
			} else if(ret > 0){
				if(ptr == head) {
					temp -> next = head;
					head = temp;
				} else if (ptr != NULL) {
					ptr_prev -> next = temp;
					temp -> next = ptr;
				}else {
					ptr_prev -> next = temp;
				}
				break;
			}else {
				printf("Name exists\n");
				return;
			}
		}
	}
	return;
}

void print_element(void)
{
         struct database *ptr = head;

         if(head == NULL) {
                 printf("%s: List is empty\n",__func__);
                 return;
         } else {
                 while (ptr != NULL) {
                        printf("%s: Name - %s: Roll No - %d\n",__func__, ptr->name, ptr->roll_no);
                       ptr = ptr -> next;
               }
        }
        return ;
}


void sort_rollno(void)
{
	struct database *ptr = head;
	int i = 1;
	while(ptr !=NULL){
		ptr->roll_no = i++;
		ptr = ptr->next;
	}
	return;
}
