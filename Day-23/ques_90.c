// Write a program to find first repeating character

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) 
    {
        freq[(int)str[i]]++;

        if(freq[(int)str[i]] == 2) 
        {
            printf("First repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.");
    
    return 0;
}