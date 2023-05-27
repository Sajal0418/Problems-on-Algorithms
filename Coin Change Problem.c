#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int coin_change(int coins[], int n, int amount) {
  // Your code here
  int count =0;
  while(amount>0)
  {
      if(coins[n-1]<=amount)
      {
         
          amount=amount-coins[n-1];
          count++;
          
      }
      else
      {
          n--;
      }
  }
  return count;
}

int main() {
    int coins[] = {1, 5, 10, 25};
    int n = 4;
    int amount;
    scanf("%d",&amount);
    printf("%d",coin_change(coins, n, amount));
    return 0;
}
