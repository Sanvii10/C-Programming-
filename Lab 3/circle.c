#include <stdio.h>

int main()
{
    // initialize a variable
    float r, area;

    // inputting value of radius of circle

    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    // calculating area of circle
    area = (3.14 * r * r);

    // printing the value of area

    if (r <= 0)
    {
        printf("The radius of a circle cannot be negative or zero.");
    }

    else
    {

        printf("The area of the circle is %f", area);
    }
    return 0;
}

/* No mistakes in this was able to run in first go yayyyy.*/