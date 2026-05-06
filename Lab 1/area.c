#include <stdio.h>

int main()
{
    float l, b, r, AOC, aor, POC, por;

    printf("Enter the length of the rectangle = ");
    scanf("%f", &l);

    printf("Enter the breadth of the rectangle = ");
    scanf("%f", &b);

    printf("Enter the radius of the circle = ");
    scanf("%f", &r);

    if (l <= 0 || b <= 0 || r <= 0)
    {
        printf("Length, breadth and radius cannot be negative");
    }
    else
    {
        AOC = (3.14 * r * r);
        printf("The area of circle is %.2f \n", AOC);

        POC = (2 * 3.14 * r * r);
        printf("The perimeter of circle is %.2f \n", POC);

        aor = (l * b);
        printf("The area of rectangle is %.2f \n", aor);

        por = (2 * (l + b));
        printf("The perimeter of rectangle is %.2f \n", por);
    }
    return 0;
}