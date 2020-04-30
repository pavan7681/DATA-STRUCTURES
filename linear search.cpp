#include<stdio.h>
int linearsearch(int arr[],int n,int x) {
	int i;
	for (i = 0;i < n;i++) {
		if (arr[i] == x) {
			return 1;
		}
	}
	return 0;
}
int main() {
	int arr[100],n,x,i;
	printf("enter the lenght of the  array:");
	scanf("%d",&n);
	printf("enter elements of the array");
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&x);
	if(linearsearch(arr,n,x)) {
		printf("element is present");
	}
	else {
		printf("element not found");
	}
}
