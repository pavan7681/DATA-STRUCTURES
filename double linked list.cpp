#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertatpos();
void delatbeg();
void delatend();
void delatpos();
struct node {
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head = NULL,*tail = NULL;
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
            case 5: insertatpos();
                     break;
            case 6: delatbeg();
                     break;
            case 7: delatend();
                      break;
            case 8: delatpos();
                      break;
			case 9 : exit(0);
			         break;
			default: printf("please insert a valid case");

		}
	}

}

void create() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode -> data);
    newnode -> next = NULL;
    if (head == NULL) {
        head = tail = newnode;
    }
    else {
        tail -> next = newnode;
        newnode -> prev = tail;
        tail = newnode;
    }
}
void display() {
    struct node *temp;
    if (head == NULL) {
        printf("list is empty");
    }
    else {
        temp = head;
        do {
            printf("%d",temp -> data);
            printf("->");
            temp = temp -> next;
        }while (temp != NULL);
    }

}
void insertbeg() {
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	newnode -> prev = NULL;
	if (head == 0) {
        head = tail = newnode;
	}
	else {
        newnode -> next = head;
        head -> prev = newnode;
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
	newnode -> prev = temp;
    temp -> next = newnode;
}
void delatbeg() {
struct node *temp;
if (head == NULL) {
    printf("no items to delete");
}
else{
    temp = head -> next;
    temp -> prev = NULL;
    head = temp;
}
}
void delatend() {
struct node *temp;
if (head == NULL) {
    printf("no items to delete");
}
else {
    temp = tail -> prev;
    temp -> next = NULL;
    tail = temp;
}
}
void delatpos() {
struct node *temp;
int i = 1,pos;
printf("enter the position:");
scanf("%d",&pos);
temp = head;
if (pos == 0){
    delatbeg();
}
else{
    while (i <= pos) {
        temp = temp -> next;
        i =  i + 1;
    }
if (temp -> next == NULL) {
    delatend();
}
else {
(temp -> prev) -> next = temp -> next;
(temp -> next) -> prev = temp -> prev;
}
}
}

