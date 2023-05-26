#include <stdio.h>

int mat[10][10];

void rotateMatrix(int mat[10][10], int N) {
 	// Your code here
  //  int temp;
   int mat2[10][10];
   for(int i=0;i<N;i++)
   {
     for(int j=0;j<N;j++)
     {
       mat2[i][j]=mat[N-j-1][i];
     }
   }
   for(int i=0;i<N;i++)
   {
     for(int j=0;j<N;j++)
     {
       mat[i][j]=mat2[i][j];
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
