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