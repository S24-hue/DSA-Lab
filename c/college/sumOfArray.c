#include<stdio.h>
int main() {
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	int arr1[n],arr2[n],sum[n];
	printf("Enter the first array");
	for(i=0;i<n;i++) {
		scanf("%d",&arr1[i]);
	}
	printf("Enter the second array");
	for(i=0;i<n;i++) {
		scanf("%d",&arr2[i]);
		sum[i] = arr1[i] + arr2[i];
	}
	for(i=0;i<n;i++) {
		printf("%d\t",sum[i]);
	}
}