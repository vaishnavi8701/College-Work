"""Assigning Zero value to all diagonal elements in a matrix"""

matrix_A = [[1,2,3],[4,5,6],[7,8,9]]
print("Displaying the matrix:\n")
for i in range(3):
    for j in range(3):
        print(matrix[i][j],end=" ")
    print("\n")
print("Changing all diagonal elements to zero.")
for i in range(3):
    for j in range(3):
        if (i == j):
            matrix_A[i][j] = 0
print("Displaying the Result matrix:\n")
for i in range(3):
    for j in range(3):
        print(matrix[i][j],end=" ")
    print("\n")
        
