#include <stdio.h>
#define max 10

int main(){
    int a[max][max], aTranspose[max][max], row, col, n;
    printf("Enter the total number of rows: ");
    scanf("%d", &n);
    
    printf("Enter the matrix A:\n");
    for(col=0; col<n; col++){
        for(row=0; row<n; row++){
            scanf("%d", &a[col][row]);
        }
    }
    
    printf("Calculating A Transpose\n");
    for(col=0; col<n; col++){
        for(row=0; row<n; row++){
            aTranspose[col][row] = a[row][col];
        }
    }
 
    printf("Calculating A = A + At\n");
    for(col=0; col<n; col++){
        for(row=0; row<n; row++){
            a[col][row] = a[col][row] + aTranspose[col][row];
        }
    }
    
    printf("Displaying the Result Matrix A:\n");
    for(col=0; col<n; col++){
        for(row=0; row<n; row++){
            printf("%d", a[col][row]);
        }
        printf("\n");
    }
    
    return 0;
}
