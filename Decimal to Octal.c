#include <stdio.h>

void decimalToOctal(int decimal) {
//Your code here'
int oct=0;
int i=1;
while(decimal!=0)
{
    oct +=(decimal%8)*i;
    decimal/=8;
    i*=10;
}
printf("%d",oct);
}

int main() {
    int decimal;
    
    scanf("%d", &decimal);
    
    decimalToOctal(decimal);
    
    return 0;
}
