#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>

void create(int);
void traverse();
struct node{
	int data;
	struct node *next;
};
struct node *head;
int main(){

	int choice, item;
	do{
		printf("\n1. Append\n2. Traverse\n3. Exit\n");
		printf("\n\n\n\t\t Enter Your Choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("\n\t\t Enter The Item :");
				scanf("%d", &item);
				create(item);
				break;
			case 2:
				traverse();
				break;
			case 3:
				printf("Exiting...");
				exit(1);
				break;
			default:
				printf("\n\nInvalid Choice!! ");
					
				
		}
	}while(choice != 3);
}
//Create Function
void create(int item){
	struct node *ptr = (struct node*)malloc(sizeof(struct node*));
	if(ptr == NULL){
		printf("\n\n List is Empty !!");
	}else{
		ptr -> data = item;
		ptr -> next = head;
		head = ptr;
		printf("\n\n Node is Inserted !");
	}
}
//Traverse Function 
void traverse(){
	struct node *ptr;
	ptr = head;
	if(ptr == NULL){
		printf("\n\nList is Empty !");
	}else{
		printf("\n\n Printing Values ..");
		while(ptr != NULL){
			printf("\n%d", ptr->data);
			ptr = ptr -> next;
		}
	}
}

//End of Program