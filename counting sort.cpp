#include<stdio.h>
int main() {
	int arr[100],i,max = 0,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the values:");
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	int count[100] ={0},counts[100] ={0};
	for (i = 0;i < n;i++) {
		count[arr[i]] = count[arr[i]] + 1; 
	}
	for (i = 1;i <= max;i++) {
		count[i] = count[i - 1] + count[i];
	}
	for (i = n - 1;i >= 0;i--) {
		counts[--count[arr[i]]] = arr[i];
	}
	printf("the sorted array is:");
	for (i = 0;i < n;i++) {
		arr[i] = counts[i];
		printf("%d ",arr[i]);
	}
}
