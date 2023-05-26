#include<stdio.h>
#include<string.h>

int is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    }
    return 0;
}

void invertVowels(char * s) 
{
    int length = strlen(s);
    int i = 0, j = length - 1;
    while (i < j) {
        if(!is_vowel(s[i]))
        {
            i++;
            continue;
        }
        if(!is_vowel(s[j]))
        {
            j--;
            continue;
        }
        char  temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}

int main() {
    char s[100000];
    scanf("%s",s);
    invertVowels(s);
    printf("%s",s);
    return 0;
}
