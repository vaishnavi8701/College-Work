#include <stdio.h>
#define max 50

int array[max];
int binarySearch(int low, int middle, int high, int data);

int main(){
	int n, i, low, high, mid, value;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("Enter the array: ");
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	low = 0;
	high = n - 1;
	mid = (low+high) / 2;
	
	printf("Enter the value to search: ");
	scanf("%d", &value);
	
	if(binarySearch(low, mid, high, value) == 1){
		printf("Element is present.");
	}else{
		printf("Not found.");
	}
	
	return 0;
}

binarySearch(int low, int middle, int high, int data){
	while(low <= high){
		if(array[middle] == data){
			return 1;
		}else if(array[middle] > data){
			low = middle + 1;
			middle = (low + high) / 2;
			binarySearch(low, middle, high, data);
		}else if(array[middle] < data){
			high = middle - 1;
			middle = (low + high) / 2;
			binarySearch(low, middle, high, data);
		}
	}
}
