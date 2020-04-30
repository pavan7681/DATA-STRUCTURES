#include<stdio.h>
void countsort(int arr[],int n,int pos,int c){
		int count[100] ={0},counts[100] ={0},i;
		for (i = 0;i < n;i++) {
			count[(arr[i]/pos)] = count[(arr[i]/pos)] + 1; 
		}
		for (i = 1;i <= c;i++) {
			count[i] = count[i - 1] + count[i];
		}
		for (i = n - 1;i >= 0;i--) {
			counts[--count[(arr[i]/pos) % 10]] = arr[i];
		}
		for (i = 0;i < n;i++) {
			arr[i] = counts[i];
		}
}
int main() {
	int arr[100],i,max = 0,n,pos,c  = 0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the values:");
	for (i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	while (max !=0) {
		max = max / 10;
		c =  c + 1;
	}
	for (pos = 1;max / pos <= 0;pos * 10) {
		countsort(arr,n,pos,c);
	}
	printf("the sorted array is:");
	for (i = 0;i < n;i++) {
		printf("%d ",arr[i]);
	}
}
