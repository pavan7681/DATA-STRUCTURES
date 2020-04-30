#include<stdio.h>
int main() {
	int a[100],i,j,key,m,n;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements");
	for (i = 1;i <= n;i++) {
		scanf("%d",&a[i]);
	}
	for (j = 2;j <= n;j++) {
		
		key = a[j];
		m = j - 1;
		while (m > 0 && a[m] > key) {
			   a[m + 1] = a[m];
			   m = m - 1;
		}
		a[m + 1] = key;
	}
	printf("the sorted elements are:");
	for (i = 1;i <= n;i++) {
		printf("%d ",a[i]);
	}
	
}
