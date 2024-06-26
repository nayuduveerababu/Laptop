#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int add(struct node **head, int data){
	struct node *new = (struct node*)malloc(sizeof(struct node));
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
		printf("%d\t%p\t%p\n ",temp->data,&(temp->data),temp->next);
		temp = temp->next;
	}
}

int reverse(struct node **head){
	struct node *curr = *head;
	struct node *prev = NULL, *next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
}

int middle_node(struct node *head){
	struct node *slow = head;
	struct node *fast = head->next;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	printf("MIddle of Node == %d\n",slow->data);
}

int middle_node_insert(struct node **head, int data, int loc){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	struct node *temp = *head;
	new->data = data;
	for(int i=1;i<loc;i++){
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
}

int delete_random(struct node *head, int loc){
	struct node *temp = head;
	struct node *ptr;

	for(int i=1;i<loc;i++){
		ptr = temp;
		temp = temp->next;
	}
	ptr->next = temp->next;
	free(temp);
	printf("Delete %d position was done!!!!\n",loc);
}

int main(){
	struct node *head = NULL;
	add(&head,5);
	add(&head,4);
	add(&head,7);
	add(&head,2);
	add(&head,3);
	add(&head,1);
	add(&head,9);

	printf("Printing the exited linked list!!!!!!!\n");
	print(head);
	printf("printing address of linked list!!!!!!!!!\n");
	print_address(head);
	reverse(&head);
	printf("Rverse the existed linked list!!!!!!!\n");
	print(head);
	printf("printing address of Reverse linked list!!!!!!!!!\n");
	print_address(head);
	middle_node(head);
	middle_node_insert(&head,8,4);
	printf("8 data entering the existed linked list!!!!!!!\n");
	print(head);
	printf("8 data entered printing address of linked list!!!!!!!!!\n");
	print_address(head);
	print(head);
	middle_node(head);
	delete_random(head,3);
	printf("Printing the random delete at middle linked list!!!!!!!\n");
	print(head);
	return 0;
}
