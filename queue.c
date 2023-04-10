#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#define MAX 50

//C Program to Implement a Queue using  array.
void enqueue();
void dequeue();
void peek();

int queue_array[MAX];
int rear = -1;
int front = -1;
main(){
	int choice;
	while(1){
		printf("\n =============================== \n");
		printf("1. Insert Element to Queue\n");
		printf("2. Delete Element from Queue\n");
		printf("3. Display All The Elements of queue\n");
		printf("4. Exit\n");
		printf("\n\n\t\t\t :: Enter Your Choice :: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("\n =============================== \n");
				enqueue();
				break;
			case 2:
				printf("\n =============================== \n");
				dequeue();
				break;
			case 3:
				printf("\n =============================== \n");
				peek();
				break;
			case 4:
				system("cls");
				printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
				printf("Exiting.....");
				sleep(2);
				exit(1);
			default:
				system("cls");
				printf("\n =============================== \n");
				printf("Invalid Choice !!!\n"); 
		}
	}
}
void enqueue(){
	int add_item;
	if(rear == MAX -1)
		printf("Queue Overflow \n");
	else{
		if(front == -1){
			front = 0;
			printf("\n :: Insert The Element in Queue ::");
			scanf("%d", &add_item);
			rear = rear + 1;
			queue_array[rear] = add_item;
		}
	}
}
void dequeue(){
	if(front == -1 || front > rear){
		printf(" :: Queue Overflow :: \n");
		return;
	}else{
		printf("Element deleted from Queue is %d\n", queue_array[front]);
		front = front + 1;
	}
}
void peek(){
	int i;
	if(front == -1){
		printf("Queue is empty \n");
	}else{
		
		printf(":: Queue is : \n");
		for(i=front; i<=rear; i++){
			printf("%d ", queue_array[i]);
			printf("\n");
		}
	}
}

