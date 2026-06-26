// Write a program to create quiz application

#include <stdio.h>

int main() 
{
    int score = 0, answer;

    printf("===== C QUIZ =====\n");

    printf("\nQ1. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. ;\n3. .\n4. ,\n");
    printf("Your Answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        score++;
    }
    
    printf("\nQ2. Which function is the entry point of a C program?\n");
    printf("1. start()\n2. begin()\n3. main()\n4. run()\n");
    printf("Your Answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        score++;
    }

    printf("\nQ3. Which header file is used for printf()?\n");
    printf("1. string.h\n2. stdio.h\n3. math.h\n4. conio.h\n");
    printf("Your Answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        score++;
    }

    printf("\nQ4. Which operator is used for multiplication?\n");
    printf("1. x\n2. *\n3. #\n4. &\n");
    printf("Your Answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        score++;
    }

    printf("\nQ5. Which data type stores integer values?\n");
    printf("1. float\n2. char\n3. int\n4. double\n");
    printf("Your Answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        score++;
    }

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
    {
        printf("Excellent!\n");
    }
    else if (score >= 3)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Keep Practicing!\n");
    }

    return 0;
}