#include <stdio.h>

int main()
{

    // declaring the variables
    float a, b, area;

    // intializing the variable and taking input from the user
    printf("The length of the rectangle is: ");
    scanf("%f", &a);

    printf("The breadth of the rectangle is: ");
    scanf("%f", &b);

    // adding checks if someone inputs negative or zero length and breadth
    if (a <= 0 || b <= 0)
    {
        printf("Length and Breadth of a rectangle are positive integers.");
    }
    else
    {

        // calculating area of a rectangle
        area = (a * b);
        printf("The area of the rectangle is = %f", area);
    }
    return 0;
}

/* What my mistakes were in this:
i named the variable a1 as int while the rest were labelled as float so i lost precision and answer wasn't correct
in the final printf address i used the & symbol which is not correct because we use & only in scanf when we need an input from the users
i used %f when i mentioned a1 as int i should have used %d
no semicolon errors good job for that
also in the first try did not include a error if someone inputs length and breadth zero or negative*/