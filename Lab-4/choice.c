#include <stdio.h>

int main()
{
    float weight, height, BMI;
    int choice;

    // Input weight and height
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    if (height <= 0.9)
    {
        printf("Inputed height is not upto CDC parameters.");
    }

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    if (weight <= 0)
    {
        printf("Inputted weight is not upto WHO parameters");
    }

    // BMI calculation
    BMI = weight / (height * height);
    printf("Your BMI is: %f", BMI);

    // Classify BMI

    if (BMI <= 15)

        choice = 1;

    else if (BMI >= 15.1 && BMI <= 17.5)

        choice = 2;

    else if (BMI >= 17.6 && BMI <= 18.5)

        choice = 3;

    else if (BMI >= 18.6 && BMI <= 24.9)

        choice = 4;

    else if (BMI >= 25 && BMI <= 25.9)

        choice = 5;

    else if (BMI >= 30 && BMI <= 39.9)

        choice = 6;

    else if (BMI >= 40)

        choice = 7;

    else

        choice = 8;

    switch (choice)
    {

    case1:
        printf("Category: Starvation.");
        break;

    case 2:
        printf("Category: Anorexic.");
        break;

    case 3:
        printf("Category: Underweight.");
        break;

    case 4:
        printf("Category: Ideal.");
        break;

    case 5:
        printf("Category: Overweight");
        break;

    case 6:
        printf("Category: Obese");
        break;

    case 7:
        printf("Category: Morbidly Obese.");
        break;

    case 8:
        printf("Category: Uncategorized.");
        break;
    }

    return 0;
}