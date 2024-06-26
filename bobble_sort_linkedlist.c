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

int middle(struct node *head){
	struct node *f = head->next;
	struct node *s = head;
	while(f != NULL && f->next != NULL){
		s = s->next;
		f = f->next->next;
	}
	printf("Middle number == %d\n",s->data);
}

int delete_alternate(struct node **head){
	struct node *new = *head, *temp;
		temp = (*head)->next;
		while(temp != NULL && new != NULL){
		new->next = temp->next;
		free(temp);
		new = new->next;
		if(new != NULL){
			temp = new->next;
		}
	}
}

int bobble_sort(struct node **head){
	struct node *temp = *head;
	struct node *ptr = NULL;
	int s=0;
	do{
		s=0;
		temp = *head;
		while(temp->next != ptr){
			if(temp->data > temp->next->data){
				int te = temp->data;
				temp->data = temp->next->data;
				temp->next->data = te;
			}
			temp = temp->next;
		}
		ptr = temp;
		s=1;
	}while(s);
}

int main(){
	struct node *head = NULL;
	add(&head,6);
	add(&head,3);
	add(&head,2);
	add(&head,1);
	add(&head,7);
	add(&head,9);
	add(&head,8);
	add(&head,5);
	
	printf("Existing linked list ==  ");
        print(head);
	bobble_sort(&head);
	printf("BObble sorting the exiting nodes!!!!!!!!!!!\n");
	print(head);
	middle(head);
	printf("%s\n%s\n%s\n",__TIME__,__FILE__,__DATE__);
	printf("Delete alternate node in given structure!!!!!!!!!\n");
	delete_alternate(&head);
	print(head);
	printf("\n");
}
