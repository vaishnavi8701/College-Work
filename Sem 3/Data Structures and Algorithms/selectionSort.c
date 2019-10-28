#include <stdio.h>

int min(int arr[], int startIndex, int endIndex){
	int minIndex = startIndex;
	int i;
	for(i=startIndex + 1; i<endIndex; i++){
		if(arr[i] < arr[startIndex])
			minIndex = i;
	}
	return minIndex;
}

void swap(int arr[], int firstIndex, int secondIndex){
	int temp;
	temp = arr[firstIndex];
	arr[firstIndex] = arr[secondIndex];
	arr[secondIndex] = temp;
}

int main(){
	
	int arr[10], i, n;
	printf("Enter array size: ");
	scanf("%d", &n);
	
	printf("Enter array elements: ");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("Initial Array: ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	for(i=0; i<n; i++){
		int minIndex = min(arr, i, n);	
		swap(arr, i, minIndex);
	}
	
	printf("\nSorted Array: ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}
