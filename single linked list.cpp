#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertatpos();
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL;
int main() {
	int n;
	while (1) {
		        printf("MENU\n");
                printf(" 1.Create\n");
                printf(" 2.Display\n");
                printf(" 3.Insert at the beginning\n");
                printf(" 4.Insert at the end  \n");
                printf(" 5.Insert at specified position \n");
                printf(" 6.Delete from beginning\n");
                printf(" 7.Delete from the end \n");
                printf(" 8.Delete from specified position \n");
                printf(" 9.Exit \n");
                printf("--------------------------------------\n");
        printf("enter the choice:");
		scanf("%d",&n);
		switch (n) {
			case 1 : create();
			         break;
            case 2 :display();
                     break;
            case 3: insertbeg();
                     break;
            case 5:insertatpos();
                     break;
			case 9 : exit(0);
			         break;
			default: printf("please insert a valid case");

		}
	}

}
void create() {
	struct node *newnode,*temp;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	if (head == NULL) {
		head = newnode;
	}
	else {
		temp = head;
		while (temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = newnode;
	}

}

void display() {
	struct node *temp = 0;
	if (head == NULL) {
		printf("list is empty");
	}
	else {
       temp = head;
       while (temp  != 0) {
       	printf("%d",temp->data);
       	printf(" -> ");
       	temp = temp -> next;
	   }
	}
}
void insertbeg() {
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	if (head == 0) {
		head = newnode;
	}
	else {
		newnode -> next = head;
		head = newnode;
	}
}
void insertatpos() {
	struct node *temp,*newnode;
	int pos,count = 1;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode -> data);
	printf("enter the position:");
	scanf("%d",&pos);
	newnode -> next = NULL;
	temp = head;
	while (count != pos) {
		temp = temp -> next;
		count = count + 1;
	}
	newnode -> next = temp -> next;
	temp -> next = newnode;
}

