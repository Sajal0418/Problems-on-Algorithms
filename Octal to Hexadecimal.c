#include <stdio.h>
#include <math.h>


// Function to convert an octal number to decimal
int octalToDecimal(int octal) {
//Your code here

int decimal = 0, i = 0;
while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }
    return decimal;
}

// Function to convert a decimal number to hexadecimal
void decimalToHexadecimal(int decimal) {
//Your code here

    // printf("%X", decimal);

    int i = 1, j, temp;
    char hexa_Number[100];
    
    // if decimal number is not equal to zero then enter into the loop and execute the statements
    while (decimal != 0) {
        temp = decimal % 16;
        
    // converting decimal number in to a hexa decimal number
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i++] = temp;
        decimal = decimal / 16;
    }
    // printing the hexa decimal number
    for (j = i - 1; j > 0; j--)
        printf("%c", hexa_Number[j]);
return ;
}

int main() {
    int octal;
    
    scanf("%d", &octal);

    int decimal = octalToDecimal(octal);
    decimalToHexadecimal(decimal);
    // printf("%d", octalToDecimal(decimal));

    return 0;
}
