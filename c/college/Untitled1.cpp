#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct SLL {
	int usn;
	char name[20];
	char mode[20];
	struct SLL *next;
};
typedef struct SLL node;
node *start =NULL;
node *CreateNode() {
	node *newNode;
	newNode = (node*)malloc(sizeof(node));
	printf("enter the usn:\n");
	scanf("%d",&newNode->usn);
	printf("enter the name:\n");
	scanf("%s",newNode->name);
	printf("enter the mode(regular/lateral/cob/coc)\n");
	scanf("%s",newNode->mode);
	newNode->next = NULL;
	return newNode;
}
void insertnode() {
	node *newnode,*temp;
	newnode = CreateNode();
	if(start == NULL) {
		start = newnode;
		return;
	}
	temp = start;
	while(temp->next!=NULL)
		temp = temp->next;
	temp->next = newnode;
}
void display() {
	node *temp = start;
	if(start ==NULL) {
		printf("list is empty\n");
		return;
	}
	printf("students in the class are:\n");
	printf("USN\tName\tMode\n");
	while(temp!=NULL) {
		printf("%d\t%s\t%s\n",temp->usn,temp->name,temp->mode);
		temp = temp->next;
	}
	printf("\n");
}
void deletekey() {
	node *temp = start,*prev;
	int key;
	if(start == NULL) {
		printf("list is empty Deleltion is not posssible");
		return;
	}
	printf("enter the usn to be deleted:\n");
	scanf("%d",&key);
	if(start->usn == key) {
		start = start->next;
		printf("deleted usn %d\n",temp->usn);
		free(temp);
	} else {
		while(temp!=NULL && temp->usn!=key){
			prev = temp;
			temp = temp->next;
		}
		prev = temp;
		temp = tem -> next;
		if(temp == NULL) {
			printf("USN is not found, so cant delete \n");
			return;
		}
		prev -> next = temp->next;
		printf("deleted usn:%d\n",temp->usn);
		free(temp);
	}
}
int main() {
	int choice,n,i;
	while(1) {
		printf("enter ur choice\n1 for insert\n2 for display\n3 for delete students based on coc cob\n4 for addind students from lateral entry/coc/cob\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1: 
			case 2:
				printf("Enter no of students: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					
				}
		}
	}
}