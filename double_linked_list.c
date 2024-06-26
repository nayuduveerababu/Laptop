#include <stdio.h>
#include <stdlib.h>

struct node{
		int data;
		struct node *prev;
		struct node *next;
	};

int print(struct node *head){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d\t%p\t%p\t%p\n ",temp->data,temp->prev,&(temp->data),temp->next);
		temp = temp->next;
	}
}
int print_add(struct node *head){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d <=> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int add(struct node **head, int data){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	if(*head == NULL){
	new->next = NULL;
	new->prev = NULL;
	*head = new;
	}
	else{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
}
/* Function to reverse a Doubly Linked List */
void reverse(struct node **head_ref)
{
    struct node* temp = NULL;
    struct node* current = *head_ref;
 
    /* swap next and prev for all nodes of
      doubly linked list */
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
 
    /* Before changing head, check for the cases like empty
       list and list with only one node */
    if (temp != NULL)
        *head_ref = temp->prev;
}


int main(){
	struct node *head = NULL;
	add(&head, 9);
	add(&head, 1);
	add(&head, 8);
	add(&head, 7);
	add(&head, 2);
	add(&head, 5);
	add(&head, 3);

	printf("Printing the  address data exited data!!!\n");
	print(head);
	printf("Printing the  data exited data!!!\n");
	print_add(head);
	reverse(&head);
	printf("Reverse the double linked list!!!!!!!!\n");
	print(head);
	print_add(head);
}
