#include <stdio.h>

int main()
{
   float weight, height, BMI;

   // Input weight and height
   printf("Enter your height in meters:");
   scanf("%f", &height);

   if (height <= 0.9 || height >= 2.7)
   {
      printf("Inputed height is not upto WHO parameters.\n");
      return 1;
   }

   printf("Enter your weight in kilograms:");
   scanf("%f", &weight);

   if (weight <= 0 || weight >= 350)
   {
      printf("Inputted weight is not upto WHO parameters\n");
      return 1;
   }

   // BMI calculation
   BMI = weight / (height * height);
   printf("Your BMI is: %f \n", BMI);

   // Classify BMI
   if (BMI < 15)
      printf("Category: Starvation.\n");

   else if (BMI >= 15.1 && BMI <= 17.5)
      printf("Category: Anorexic.\n");

   else if (BMI >= 17.6 && BMI <= 18.5)
      printf("Category: Underweight.\n");

   else if (BMI >= 18.6 && BMI <= 24.9)
      printf("Category: Ideal.\n");

   else if (BMI >= 25 && BMI <= 25.9)
      printf("Category: Overweight\n");

   else if (BMI >= 30 && BMI <= 39.9)
      printf("Category: Obese\n");

   else if (BMI >= 40)
      printf("Category: Morbidly Obese.\n");

   else
      printf("Category: Uncategorized.\n");

   return 0;
}