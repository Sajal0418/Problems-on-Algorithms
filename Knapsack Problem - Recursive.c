#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
   // Your code here
   if(n==0 || W==0)
   {
       return 0;
   }
   if(wt[n-1]>W)
   {
       return knapsack(W,wt,val,n-1);
   }
   else 
   {
       return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1),knapsack(W,wt,val,n-1));
   }
}

int main() {
    int n;
    scanf("%d",&n);
    int W = 50;
    scanf("%d",&W);
    int wt[100];
    for(int i=0;i<n;i++){
        scanf("%d",&wt[i]);
    }
    int val[100];
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    int result = knapsack(W, wt, val, n);
    printf("%d", result);
    return 0;
}
