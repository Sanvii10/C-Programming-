#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle = ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle = ");
    scanf("%f", &breadth);

    if (length <= 0 || breadth <= 0)
    {
        printf("The value of length and breadth cannot be negative or zero.");
    }
    else
    {
        area = (length * breadth);
        printf("The area of the rectangle is %.2f \n", area);

        perimeter = (2 * (length + breadth));
        printf("The perimeter of the rectangle is %.2f \n", perimeter);
    }

    return 0;
}