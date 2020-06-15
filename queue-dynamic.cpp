#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node*rear;
struct node*front;

void enqueue();
void dequeue();
void display();
int main() {
 int choice,m = 1;
	
 while (m!= 0) {
		printf("MENU\n");
		printf("1.insert the element\n");
		printf("2.delete the element\n");
		printf("3.display the elements\n");
		printf("enter the choice:");
	    scanf("%d",&choice);
    	switch (choice) {
		        case 1:  enqueue();
		                 break;
	        	case 2:  dequeue();
		                 break;
	            case 3:  display();
		                 break;
		        default: printf("not correct choice");
		                 break;						       
	           }
        }
   return 0;
}
void enqueue() {
	struct node*temp,*p;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&temp -> data);
	if (rear == 0 && front == 0) {
		 front = rear = temp;
	}
	else {
		rear -> next = temp;
		rear = temp;
	}
}
void dequeue() {
	struct node *p;
	p = front;
	free(front);
	front = p -> next;
}
void display() {
	struct node *p;
	p = front;
	while (p -> next != 0) {
		printf("%d ",p -> data);
		p = p -> next;
	}
}











