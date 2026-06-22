// Write a program to reverse a string

#include <stdio.h>

int main() 
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("Reversed string: ");
    for (i = length - 2; i >= 0; i--)      // -2 to skip newline
    { 
        printf("%c", str[i]);
    }

    return 0;
}