#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int id;
	char name[20];
	int num;
	struct node *next;
};

int add(struct node **head, int id, char *name, int num){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->id = id;
       strcpy(new->name, name);	
       new->num = num;
       new->next = *head;
       *head = new;
}

int print(struct node *head){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d\t,%s\t,%d\n",temp->id, temp->name, temp->num);
		temp = temp->next;
	}
}

int main(){
	struct node *head = NULL;
	int idnum, number;
	char name[20];
	for(int i=1; i<=3; i++){
		printf("Enter %d idnum == ",i);
		scanf("%d",&idnum);
		printf("Enter %d idname == ",i);
		scanf("%s",name);
		printf("Enter %d mobile number == ",i);
		scanf("%d",&number);

		add(&head, idnum, name, number);
	}
	print(head);
	return 0;
}
