#include<stdio.h>
int partition(int arr[],int low,int high) {
	int pivot,i,j,temp;
	pivot = arr[high];
	i = low - 1;
	for ( j = low;j <= high - 1;j++){
		if (arr[j] <= pivot) {
			i = i + 1;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
		temp = arr[i + 1];
		arr[i + 1] = arr[high];
		arr[high] = temp;
	return (i + 1);
}
void quicksort(int arr[],int low,int high){
	if (low < high) {
		int p = partition(arr,low,high);
		quicksort(arr,low,p - 1);
		quicksort(arr,p + 1,high);
	}
}
int main(){
	int i,arr[100],n;
	printf("eneter size of the array");
	scanf("%d",&n);
	printf("enter the elements:");
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n - 1);
	for (i = 0;i < n;i++) {
		printf("%d ",arr[i]);
	}
}
