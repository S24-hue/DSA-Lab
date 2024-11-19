#include<stdio.h> 
#include<conio.h>
int main() {
	int i,low,mid,high,n,key,found=0;
	printf("Enter size: ");
	scanf("%d",&n);
	int arr[100];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	low = 0;
	high = n-1;
	printf("Enter the key");
	scanf("%d",&key);
	while(low<=high) {
		mid = low + (high-low) /2;
		if(arr[mid] == key) {
            printf("Found at location %d",mid);
			found = 1;
            break;
		} else if(arr[mid]>key) {
			high = mid-1; 
		} else {
			low = mid+1;
		}
	}
    if(!found) {
        printf("Not Found at any location");
    }
    return 0;
}