#include <stdio.h>

int main()
{
    float p, r, t, SI;

    printf("Enter the principal amount = ");
    scanf("%f", &p);

    printf("Enter the annual rate of interest (in percentage)= ");
    scanf("%f", &r);

    printf("Enter the time (in years)= ");
    scanf("%f", &t);

    if (p<=0 || r<=0 || t<=0) {

        printf ("Principal, time and rate of interest cannot be zero or negative.");

    }

    else {
        SI = ((p * r * t)/100);
        printf ("The simple interest is= %.2f", SI);

    }

    return 0;
}