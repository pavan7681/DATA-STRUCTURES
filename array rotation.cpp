#include<stdio.h>
void rotate(int arr[],int n,int r) {
	int j = 0,temp[n],i;
	for (i = r;i<n;i++) {
		temp[j] = arr[i];
		j = j + 1;
	}
	for (i = 0;i < r;i++) {
		temp[j] = arr[i];
		j = j + 1;
	}
	for (i = 0;i < n;i++) {
		arr[i] = temp[i];
	}
}
int main() {
	int arr[10],r,i,n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("enter the rotations needed\n");
	scanf("%d",&r);
	rotate(arr,n,r);
	printf("the rotated array is:\n");
	for (i = 0;i < n;i++) {
		printf("%d ",arr[i]);
	}
}
