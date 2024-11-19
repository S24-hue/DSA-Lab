#include<stdio.h> 
int main() {
	int low,mid,high,i=0,n,key,found=0,loc=0;
	printf("Enter size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	low = 0;
	high = n-1;
	printf("Enter the key");
	scanf("%d",&key);
	while(low<=high) {
		mid = (low + (high-low)) /2;
		if(arr[mid] == key) {
			found = 1;
			loc=i;
		} else if(arr[mid]>key) {
			high = mid-1; 
		} else {
			low = mid+1;
		}
		i++;
	}
	if(found == 1) {
		printf("Found at location %d",loc);
	}
}