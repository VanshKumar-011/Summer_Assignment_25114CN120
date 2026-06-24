// Write a program to Remove duplicate characters

#include <stdio.h>
#include <string.h>
char* removeDuplicate(char* s) 
{
    int index = 0;
    int i, j;
    int len = strlen(s);
    for (i = 0; i < len; i++) 
    {
        for (j = 0; j < i; j++) 
            if (s[i] == s[j])
                break;
        if (j == i)
            s[index++] = s[i];
    }  
    s[index] = '\0';
    return s;
}

int main() 
{
    char s[] = "geeksforgeeks";
    printf("%s\n", removeDuplicate(s));
    return 0;
}