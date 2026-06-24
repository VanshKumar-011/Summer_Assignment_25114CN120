// Write a program to find longest word

#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char longest[100] = "";
    char word[100] = "";
    int j = 0;
    int len = strlen(sentence);

    for (int i = 0; i <= len; i++) 
    {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') 
        {
            word[j++] = sentence[i];
        } else 
        {
            word[j] = '\0';
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
        }
    }

    printf("Longest word: %s (length: %lu)\n", longest, strlen(longest));
    return 0;
}