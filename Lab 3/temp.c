#include <stdio.h>

int main()
{
    float c, Temperature;
    // input from user for temperature in celsius
    printf("Enter temperature in celsius= ");
    scanf("%f", &c);

    // convert temperature to fahrenheit

    Temperature = ((c * 9 / 5) + 32);

    printf("The temperature converted to fahrenheit is = %.2f", Temperature);

    return 0;
}

/*NO MISTAKES IN THIS YAYYYYYYYYY (literally the shortest programme don't be too happy)
no wait there was a mistake you forgot to write %f in the printf statement which is omg no words.*/