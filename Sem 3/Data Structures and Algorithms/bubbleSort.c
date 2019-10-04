/*Bubble Sort Program*/

#include <stdio.h>
#define max 20

int main(){
	int i, j, array[max], n, temp;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("Enter the array elements to sort: ");
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	printf("Sorting the Array elements.\n");
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(array[j] > array[j+1]){
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
	
	printf("Sorted array: ");
	for(i=0; i<n; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}
