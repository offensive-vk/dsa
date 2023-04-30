#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<limits.h>
#include<math.h>
#define MAX 10

void enqueue();
void dequeue();
void display();

int pq[MAX];
int front, rear;
front = rear = -1; 


int main(){
	
}

void enqueue(int data){
	if(rear == MAX-1){
		printf("Queue is Full , Overflow !\n");
		return;
	}
	printf(":: Enter The Element :: ");
	scanf("%d", &data);
	if(front == -1){
		++front;
		++rear;
		pq[rear] = data;
		return;
	}
	priority(data);
}

void priority(int data){
	if(queue[rear]<data){
		++rear;
		queue[rear] = data;
		for(i=front; i<=rear; i++){
			if(pq[i]>data){
				for(j=rear+1; j>i; j++){
					pq[j]=pq[j-1];
				}                                                                           
			}
		}
	}
}





















