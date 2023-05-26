#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>

char *bin2hex(char *bin) {
  // Your code here
  int i,j,dec=0,power=0;
    int len = strlen(bin);
    char *hexadecimal = (char*)malloc(sizeof(char) * (len / 4 + 1));
    for (i = len - 1; i >= 0; i -= 4) 
    {
    dec = 0, power = 0;
        for (j = i; j > i - 4 && j >= 0; j--) 
        {
             dec+= (bin[j] - '0') * pow(2, power);
      power++;
        }
    if (dec >= 0 && dec <= 9) 
    {
      hexadecimal[i / 4] = dec + '0';
    } 
    else 
    {
      hexadecimal[i / 4] = dec + 'A' - 10;
    }
  }
  hexadecimal[len / 4 + 1] = '\0';
  return hexadecimal;

}

int main() {
    char bin[100];
    scanf("%s", bin);
    char *hex = bin2hex(bin);
    printf("%s\n", hex);
    free(hex);
    return 0;
}

