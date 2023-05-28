#include <stdio.h>

int mat[10][10];

void rotateMatrix(int mat[10][10], int N) {
 	// Your code here
  //  int temp;
   for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {//transposing the matrix
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    //Reversing each row 
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            int temp=matrix[i][j];
            matrix[i][j]= matrix[i][n-j-1];
            matrix[i][n-j-1]=temp;
        }
    }

     
}

void printMatrix(int mat[10][10], int N) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  printf("\n");
}

int main() {
    int N;
    scanf("%d",&N);
        
    for(int i=0; i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &mat[i][j]);
        }
    }

  rotateMatrix(mat, N);
  printMatrix(mat,N);

  return 0;
}
