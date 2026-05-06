#include <stdio.h>

//global variable declaration
char choice;

// Function declaration
void Namaste();
void Bonjour();

int main()
{

    char I;
    char F;
    

    printf("Are you indian or French (enter I for indian and F for french) = ");
    scanf("%c", &choice);

    if (choice == 'I')
    {
        Namaste();
    }
    else
    {
        Bonjour();
    }

    return 0;
}

// Function defination
void Namaste()
{
    printf("You entered '%c' \n", choice);
    printf("Namaste");
}

void Bonjour()
{
    printf("You entered '%c' \n", choice);
    printf("Bonjour");
}