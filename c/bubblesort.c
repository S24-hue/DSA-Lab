#include<stdio.h>
int main() {
	int n,i,j,temp;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Elements are:\n");
	for (i=0;i<n;i++) {
		printf("%d\n",arr[i]);
	}
	printf("Sorted array is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++) {
			if(arr[j]>arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++) {
		printf("%d\n",arr[i]);
	}
}