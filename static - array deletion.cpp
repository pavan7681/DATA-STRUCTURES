#include<stdio.h>
void delete(int arr[],int n,int pos,int x) {
	int i,j;
	for (i = 0;i < n;i++) {
		if (arr[i] == x){
			break;
		}
	}
	for (j == i + 1;j < n - 1;j++) {
		arr[j] = arr[j + 1];
	}
	n = n - 1;
}
int main() {
	int x,pos,i,arr[100];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("enter the element");
	scanf("%d",&x);
	delete(arr,n,x);
	for (i = 0;i <= n;i++) {
		printf("%d ",arr[i]);
	}
	delete(arr,n,pos,x);
	for (i = 0;i <= n;i++) {
		printf("%d ",arr[i]);
	}
}
