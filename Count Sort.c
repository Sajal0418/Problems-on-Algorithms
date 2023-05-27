#include <stdio.h>

// Function to perform count sort
void countSort(int arr[], int n) {
//Your code here
 int output[n+1];  
   int max = Max(arr, n);  
   int count[max+1]; //create count array with size [max+1]  
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; // Initialize count array with all zeros  
  }  
    
  for (int i = 0; i < n; i++) // Store the count of each element  
  {  
    count[arr[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1]; //find cumulative frequency  
  
  /* This loop will find the index of each element of the original array in count array, and 
   place the elements in output array*/  
  for (int i = n - 1; i >= 0; i--) {  
    output[count[arr[i]] - 1] = arr[i];  
    count[arr[i]]--; // decrease count  
}  
  
   for(int i = 0; i<n; i++) {  
      arr[i] = output[i]; //store the sorted elements  
   }  
  
}

// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    countSort(arr, n);

    printArray(arr, n);

    return 0;
}

int Max(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //maximum 
}  

