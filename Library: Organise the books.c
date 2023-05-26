#include <stdio.h>

// Function to merge two sorted sub-arrays into one sorted array
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while (i < leftSize) {
        arr[k++] = left[i++];
    }
    while (j < rightSize) {
        arr[k++] = right[j++];
    }
}

// Recursive function to perform merge sort on an array
void mergeSort(int arr[], int n) {
  //Your code here
  if(n<2)
  {
      return;
  }
  int m=n/2;
    int left[m],right[n-m];
    for(int j=0;j<m;j++)
    {
        left[j]=arr[j];
    }
        for(int j=m;j<n;j++)
    {
        right[j-m]=arr[j];
    }
    mergeSort(left,m);
    mergeSort(right,n-m);
    merge(arr,left,m,right,n-m);
}

int main() {
    
    int books[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&books[i]);
    }
    mergeSort(books, n);

    printf("After sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", books[i]);
    }
    printf("\n");

    printf("The library is pleased with the sorted books & can now organise.\n");
    return 0;
}
