#include<stdio.h>
int main() {
	int arr[100],n,i,j,min,temp;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf("enter the elements in the array\n");
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	for (i = 0;i < n - 1;i++) {
		min = i;
		for (j = i + 1;j < n;j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (i != min) {
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	printf("the sorted array :\n");
	for (i = 0;i < n;i++) {
		printf("%d ",arr[i]);
	}
}
