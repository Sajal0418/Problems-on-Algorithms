#include <stdio.h>

// Function to swap two elements in an array
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    //Your code here
    int i,j,pivot,temp;
    pivot=arr[low];
    i=low;
    j=high+1;

    while(1)
    {
        i++;while((arr[i]<pivot) && (i<j))i++;
        j--;while((arr[j]>pivot) && (j>=i))j--;
        if(i<j) {//swap(arr,i,j);
            temp=arr[i];arr[i]=arr[j];arr[j]=temp;
            }

        else break;
    }
    arr[low]=arr[j];
    arr[j]=pivot;
    return j;
}

// Function to perform quick sort on an array
void quickSort(int arr[], int low, int high) {
    //Your code here
     int s;
    if(low<high){
        s = partition(arr,low,high);
        // printf("%d\n",s);
        quickSort(arr,low,s-1);
        quickSort(arr,s+1,high);
    }

}

int main() {
    int treasure[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&treasure[i]);
    }

    quickSort(treasure, 0, n - 1);

    printf("After sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", treasure[i]);
    }
    printf("\n");

    printf("The adventurer is pleased with the sorted treasure and can now count their wealth.\n");
    return 0;
}
