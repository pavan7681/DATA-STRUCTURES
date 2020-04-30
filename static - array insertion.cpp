// THIS CODE IS FOR INSERTION IN STATIC ARRAY 
//THE TIME COMPLEXITY IS O(n)
#include<stdio.h>
void insert(int arr[],int n,int pos,int x) {
	int i;
	if (pos == n-1) {
		arr[n] = x;
	}
	else {
		for(i = n;i > pos;i--) {
			arr[i] = arr[i - 1];
		}
		arr[pos] = x;
	}
}
int main() {
	int arr[100],i,x,pos,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("enter the element");
	scanf("%d",&x);
	printf("enter the position where the element must be placed");
	scanf("%d",&pos);
	insert(arr,n,pos,x);
	for (i = 0;i <= n;i++) {
		printf("%d ",arr[i]);
	}
}
