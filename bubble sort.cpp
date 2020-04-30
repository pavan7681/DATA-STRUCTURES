#include<stdio.h>
int main() {
	int a[100],n,temp,m,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements :");
	for (i = 0;i < n;i++) {
		scanf("%d",&a[i]);
	}	
	do {
		m = 0;
		for (i = 0;i < n - 1;i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				m = 1;
			    }
			}
			
		}while(m != 0);
	for (i = 0;i < n;i++) {
		printf(" %d ",a[i]);
	}		
}
