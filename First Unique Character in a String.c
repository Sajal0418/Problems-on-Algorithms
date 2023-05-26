#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

char find_first_unique_char(char str[]) {
//Your code here
int alpha[27];
for(int i=0;i<27;i++)
{
    alpha[i]=0;
}
int len= strlen(str);
for(int i=0;i<len;i++)
{
    int a=str[i]-97;
    alpha[a]++;
}
for(int i=0;i<len;i++)
{
    int b=str[i]-97;
    if(alpha[b]==1)
    {
        return str[i];
    }
}
return '\0';
}

int main() {
    char str[MAX_LEN];

    fgets(str, MAX_LEN, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character if present

    char first_unique = find_first_unique_char(str);

    if (first_unique != '\0') {
        printf("The first unique character is %c\n", first_unique);
    } else {
        printf("There is no unique character in the string.\n");
    }

    return 0;
}
