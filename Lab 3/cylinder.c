#include <stdio.h>

int main()
{
    // initialize a variable
    float r, h, volume, area;
    char choice;

    // Asking what we want
    printf("Do you want to find out area of circle (enter 'c') or volume of cylinder (enter 'v'): ");
    scanf("%c", &choice);

    if (choice == 'c')
    {

        // inputting value of radius of circle

        printf("Enter radius of the circle: ");
        scanf("%f", &r);

        if (r <= 0)
        {
            printf("The radius of a circle cannot be negative or zero.");
        }
        else
        {
            // calculating area of circle
            area = (3.14 * r * r);
            printf("The area of the circle is %f", area);
        }
    }

    else if (choice == 'v')
    {
        printf("Enter radius of cylinder: ");
        scanf("%f", &r);

        printf("Enter height of cylinder: ");
        scanf("%f", &h);

        if (r <= 0 || h <= 0)
        {
            printf("The input cannot be negative or zero.");
        }

        else
        {
            volume = (3.14 * r * r * h);

            printf("The volume of cylinder is %f", volume);
        }
    }
    else
    {
        printf(" Invalid choice please enter 'c' or 'v' ");
    }

    return 0;
}


/* WHAT MISTAKES I MADE IN THIS:
even for giving a choice i made a float character which was not valid beacuse a character choice cannot be a decimal number you stupid ass person.
we declare choice so that we can store the input in that char cannot be the input case we store the it in that
used a variable without declaration rookie mistake man
syntax error SERIOUSLY DAWG STOP MAKING SYNATX ERRORS
you cannot check the validity of input after calculating the area cause thta is stupid CHECK IT BEFORE CALCULATION
the choice that we give has to be in single quotes for them to be considered character constants 
you put the final else inside theif else which is pathetic to say the least
you can use %.2f so that it stops after 2 decimal places.
TOO MANY MISTAKES WRITE THIS PROGRAMME AGAIN TOMO AND DO NOT OPEN THIS PROGRAMME
ALSO DO NOT REPEAT THESE MISTAKES AND FOR THE LOVE OF GOD PLS DON'T CREATE NEW ONES*/