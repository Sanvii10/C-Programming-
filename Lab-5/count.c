#include <stdio.h>

int main()
{
    int number;
    int positivecount = 0, negativecount = 0, zerocount = 0;
    char choice;

    do
    {
        printf("Enter a number = ");
        scanf("%d", &number);

        if (number > 0)
            positivecount++;

        else if (number < 0)
            negativecount++;

        else
            zerocount++;

        printf("Do you want to enter another number? (a/b): ");
        scanf(" %c", &choice);

    } while (choice == 'a');

    printf("Positive numbers: %d \n", positivecount);
    printf("Negative numbers: %d \n", negativecount);
    printf("Zeroes: %d \n", zerocount);

    return 0;
}
