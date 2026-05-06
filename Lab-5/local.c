#include <stdio.h>



// Function declaration
void Namaste();
void Bonjour();

int main()
{

    char I;
    char F;
    char choice;
    

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
    //local variable 
    char local = "Namaste";
    printf("%c \n", local);
}

void Bonjour()
{
    char local2 = "Bonjour";
    printf("%c \n", local2);
}