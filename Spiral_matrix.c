/*Given a matrix write a C program to print the spiral representation of it.
 Use variables, top, bottom, left, and right, to keep track of the boundaries 
 of the matrix as it spirals inwards. It starts by printing the top row, then 
 the rightmost column, then the bottom row, and finally the leftmost column. 
 After each row or column is printed, the corresponding boundary variable is 
 updated, and the process is repeated until all elements in the matrix have been printed.*/

 //code

 #include <stdio.h>



#define MAX_ROWS 10
#define MAX_COLS 10

void printSpiral(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) 
{
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            {
                printf("%d ", matrix[top][i]);
            }
        top++;

        
        for (int j = top; j <= bottom; j++)
            {
                printf("%d ", matrix[j][right]);
            }
        right--;

        if (top <= bottom)
        {
            for (int k = right; k >= left; k--)
                {
                    printf("%d ", matrix[bottom][k]);
                }
            bottom--;
        }

        if (left <= right)
        {
            for (int l = bottom; l >= top; l--)
                {
                    printf("%d ", matrix[l][left]);
                }
            left++;
        }
    }
}

int main() 
{
    int matrix[MAX_ROWS][MAX_COLS];

    int cols,rows;
    scanf("%d",&cols);
    scanf("%d",&rows);
    
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printSpiral(matrix, cols, rows);
    return 0;
}