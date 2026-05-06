#include <stdio.h>

int main()
{
    // declare variables for principal, interest and time

    float p, si, t, r;

    // Taking values from user
    printf("Input value of principal = ");
    scanf("%f", &p);

    printf("Input value of interest =  ");
    scanf("%f", &r);

    printf("Input value of time = ");
    scanf("%f", &t);

    // Condition and calculating simple interest
    if (p <= 0 || t <= 0 || r <= 0)
    {
        printf("The value of principal, rate of interest or time canot be negative or zero");
    }

    else if (p >= 0 || t >= 0 || r >= 0)
    {

        si = ((p * r * t) / 100);
        printf("The value of simple interest is %.2f \n", si);
    }
    else
    {
        printf("The value of simple interest cannot be calculated as the inputted values are not correct");
    }

    return 0;
}