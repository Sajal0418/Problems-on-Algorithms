#include <stdio.h>
#include <stdbool.h>
#include<string.h>

bool canConstruct(char * ransomNote, char * magazine){
	// Your code here
    int m=strlen(ransomNote);
    int n=strlen(magazine);
    for(int i=0;i<m;i++)
    {
        int check=0;
        for(int j=0;j<n;j++)
        {
            if(ransomNote[i]==magazine[j])
            {
                check++;
                magazine[j]=64;
                break;
            }
        }
        if(check==0)
        {
            return false;
        }
    }
    return true;

}


int main()
{
    char ransomNote[20], magazine[20];
    scanf("%s",&ransomNote);
    scanf("%s",&magazine);
    bool result;
	result = canConstruct(ransomNote, magazine);

	if(result==true) printf("true");
	else printf("false");

	return 0;
}
