#include<stdio.h>
int binarysearch(int arr[],int l,int h,int x) {
	 while (l <= h
	 ) { 
        int m = l + (h - l) / 2;  
        if (arr[m] == x) 
            return m;  
        if (arr[m] < x) 
            l = m + 1; 
        else
            h = m - 1; 
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
	if (binarysearch(arr,0,n - 1,x)) {
		printf("element is found");
	}
	else {
		printf("element not found")	;
	}
}
