#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;
    float p1, p2, p3, max;
    int rectangle;

    // Take input from users
    printf("Enter the length and breadth of rectangle 1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the length and breadth of rectangle 2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the length and breadth of rectangle 3: ");
    scanf("%f %f", &x3, &y3);

    if (x1 <= 0 || y1 <= 0 || x2 <= 0 || y2 <= 0 || x3 <= 0 || y3 <= 0)
    {
        printf("Length and breadth must be positive values.\n");
    }

    // checking the perimeter of the rectangle
    p1 = 2 * (x1 + y1);
    p2 = 2 * (x2 + y2);
    p3 = 2 * (x3 + y3);

    // checking which triangle has the highest perimeter
    max = (p1 > p2)? ((p1 > p3) ? p1:p3) : ((p2>p3)? p2:p3);
    rectangle = (p1>p2)?((p1>p3)? 1:3):((p2>p3)?2:3);

    printf("Rectangle %d has the highest perimeter %.2f", rectangle, max);

    return 0;
}