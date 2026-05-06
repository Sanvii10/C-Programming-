#include <stdio.h>

int main()
{
    float temp, c;

    printf("Enter the temperature = ");
    scanf("%f", &temp);
    // converting the temperature into centigrade

    c = ((temp - 32) * 5 / 9);
    printf("The temperature in centigrade is %.2f", c);

    return 0;
}