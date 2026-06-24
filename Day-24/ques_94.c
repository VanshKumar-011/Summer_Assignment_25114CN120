// Write a program to compress a string

#include <stdio.h>
#include <string.h>

void compress(char *str) 
{
    int len = strlen(str);
    int i = 0;

    printf("Compressed string: ");
    while (i < len) 
    {
        int count = 1;
        while (i + count < len && str[i] == str[i + count])
        {
            count++;
        }

        printf("%c", str[i]);
        if (count > 1)
        {
            printf("%d", count);
        }

        i =i + count;
    }
    printf("\n");
}

int main() 
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    compress(str);
    return 0;
}