#include <stdio.h>
#define max 20

int main(){
	int n, i, value, flag, array[max];
	
	flag = 0; //Indication Variable
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	printf("Enter the values: ");
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	printf("Enter a value to search: ");
	scanf("%d", &value);
	
	for(i=0; i<n; i++){
		if(array[i] == value){
			flag = 1;
			break;
		}
	}
	
	if(flag == 1){
		printf("Element is present.");
	}else{
		printf("Not found.");
	}
	
	return 0;
}
