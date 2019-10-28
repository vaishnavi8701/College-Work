#include <stdio.h>

int main(){
	int arr[10], i, j, n, temp;
	printf("Enter array size: ");
	scanf("%d", &n);
	
	printf("Enter the array elements: ");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	printf("Array before sorting: ");	
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
		
	/*Insertion sort starts here*/
	
	for(i=1; i<n; i++){
		temp = arr[i];
		j = i - 1;
		while(j>=0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	
	printf("\nArray after sorting: ");	
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}
