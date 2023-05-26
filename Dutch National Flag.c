/*Given an array nums with n objects coloured red, white, or blue, sort them in place so that
objects of the same colour are adjacent, with the colours in the order red, white, and blue.
We will use the integers 0, 1 and 2 to represent the colours red, white and blue respectively.


Sample Input:
6		        //Length of Array
2 0 2 1 1 0	//Input Array
Sample Output:
0 0 1 1 2 2

*/

//code

#include <stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sortColours(int a[], int arr_size)
{
	// Your code here
    int temp;
    for(int i=0;i<arr_size-1;i++)
    {
        for(int j=i+1;j<arr_size;j++)
        {
            //swapping elements
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
	int arr[20];
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	sortColours(arr, n);
	for(int i=0;i<n;i++){
	    printf("%d ",arr[i]);
	}
	return 0;
}
