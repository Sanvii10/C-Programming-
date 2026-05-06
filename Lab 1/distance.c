#include <stdio.h>

int main()
{
    float km, m, i, feet, cm;

    printf("Enter the distance between the cities (in km) = ");
    scanf("%f", &km);
    // convert km into meters, feet, inches and centimeters

    if (km <= 0)
    {
        printf("The distance cannot be zero or negative");
    }
    else
    {
        m = (km * 1000);
        printf("The distance in meters is %.2f \n", m);

        cm = (km * 100000);
        printf("The distance in centimeters is %.2f \n", cm);

        i = (km * 39370.1);
        printf("The distance in inches is %.2f \n", i);

        feet = (3280.84);
        printf("The distance in feet is %.2f \n", feet);
    }

    return 0;
}