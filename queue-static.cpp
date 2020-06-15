#include<stdio.h>
int queue[5];
int front = -1;
int rear = -1;
void enqueue();
void dequeue();
void peek();
void display();
int main() {
 int choice,m = 1;
	
 while (m!= 0) {
		printf("MENU\n");
		printf("1.insert the element\n");
		printf("2.delete the element\n");
		printf("3.display the top element of the stack\n");
		printf("4.display the elements\n");
		printf("enter the choice:");
	    scanf("%d",&choice);
    	switch (choice) {
		        case 1:  enqueue();
		                 break;
	        	case 2:  dequeue();
		                 break;
	            case 3:  peek();
		                 break;
	            case 4:  display();
		                 break;
		        default: printf("not correct choice");
		                 break;						       
	           }
        }
   return 0;
}
void enqueue() {
	int x;
	printf("enter the data:");
	scanf("%d",&x);
	if (rear == 4) {
		printf("overflow");
	}
	else if (front == -1 && rear == -1) {
  	         front = rear = 0;
			  queue[rear] = x;	
	}
	else {
		rear++;
		queue[rear] = x;
	}
	
}
void dequeue() {
	if (front == -1 && rear == -1) {
		printf("underflow");
	}
	else if(front == rear) {
		front = rear = -1;
	}
	else {
		printf("the dequeued element is:%d",queue[front]);
		front++;
	}
}
void peek() {
	printf("the top element is :%d",queue[front]);	
}
void display() {
  int i;
  if (front == -1 && rear == -1) {
  	printf("empty");
  }
  else {
  for (i = front;i < rear + 1;i++) {
  	printf("%d ",queue[i]);
  }
}
	
}













