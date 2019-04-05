"""Exercise - Matrix Addition"""

matrix_A = [[1,2,3],[4,5,6],[7,8,9]]
matrix_B = [[5,6,8],[3,5,4],[1,8,9]]
resultMatrix = [[0,0,0],[0,0,0],[0,0,0]]
print("Adding Matrix A and Matrix B")
for i in range(3):
    for j in range(3):
        resultMatrix[i][j] = matrix_A[i][j] + matrix_B[i][j]
print("Displaying the Result Matrix:\n")
for i in range(3):
    for j in range(3):
        print(resultMatrix[i][j],end=" ")
    print("\n")
