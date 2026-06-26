// Write a program to create voting eligibility system

#include <stdio.h>

int main() 
{
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("%s is eligible to vote.\n", name);
    }
    else
    {
        printf("%s is not eligible to vote.\nYou can vote after %d year(s).\n", name, 18 - age);
    }
    
    return 0;
}