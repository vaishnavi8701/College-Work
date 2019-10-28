/*Floyd's Warshall Algorithm*/

#include <stdio.h>
#define max 50

void floydWarshall(int arr[max][max], int size){
	int i, j, k;
	for(k=0; k<size; k++){
		for(i=0; i<size; i++){
			for(j=0; j<size; j++){
				if(arr[i][k] + arr[k][j] < arr[i][j]){
					arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}
}

void displayMatrix(int arr[max][max], int size){
	int i,j;
	printf("\nAll pair shortest path matrix:\n");
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int dist[max][max], i, j, n;
	printf("Enter the number of vertices: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Distance[%d][%d]: ", i, j);
			scanf("%d", &dist[i][j]);
		}
	}
	
	floydWarshall(dist, n);
	displayMatrix(dist, n);
	
	return 0;
}
