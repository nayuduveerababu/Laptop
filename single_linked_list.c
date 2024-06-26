#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int add(struct node **head, int data){
	struct node *new = malloc(sizeof(struct node));
	new->data = data;
	new->next = *head;
	*head = new;
}

int print(struct node *head){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int print_address(struct node *head){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d\t%p\t%p\n",temp->data,&(temp->data),temp->next);
		temp = temp->next;
	}
	printf("NULL\n");
}

int bobble_sort(struct node **head){
	struct node *ptr;
	struct node *hptr = NULL;
	int high;

	do{
		high = 0;
		ptr = *head;
		while(ptr->next != hptr){
			if(ptr->data > ptr->next->data){
				int temp = ptr->data;
				ptr->data = ptr->next->data;
				ptr->next->data = temp;
				high = 1;
			}
			ptr = ptr->next;
		}
		hptr = ptr;
	}while(high);
}

int duplicate(struct node *head){
	struct node *ptr = head;
	while(ptr != NULL){
		struct node *trav = ptr;
		while(trav->next != NULL){
			if(trav->next->data == ptr->data){
				struct node *temp = trav->next;
				trav->next = trav->next->next;
				free(temp);
			}
			else{
				trav = trav->next;
			}
		}
		ptr = ptr->next;
	}
}

int insert(struct node **head, int data){
	struct node *new = malloc(sizeof(struct node));
	new->data = data;
	struct node *temp = NULL, *ptr = *head;
	while(ptr->next != NULL){
		if(ptr->data > new->data){
			new->next = temp->next;
			temp->next = new;
			break;
		}
		temp = ptr;
		ptr = ptr->next;
	}
}

int main(){
	struct node *head = NULL;
	add(&head, 5);
	add(&head, 6);
	add(&head, 6);
	add(&head, 2);
	add(&head, 1);
	add(&head, 6);
	add(&head, 3);
	add(&head, 9);
	add(&head, 8);
	add(&head, 6);

	printf("Printing existing linked list!!!!!!!!!!!!!!\n");
	print(head);
	printf("Printing existing linked list address!!!!!!!\n");
	print_address(head);
	printf("Bobble sorting Insert 7 existing linked list!!!!!!!!!!\n");
	bobble_sort(&head);
	insert(&head,7);
	print(head);
	printf("Remove duplicate elements!!!!!!!!!!!!!!!!\n");
	duplicate(head);
	print(head);

	return 0;
}

