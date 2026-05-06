#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    //Taking input for x1 and y1 from user

    printf("Enter value of x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter value of x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter value of x3 and y3: ");
    scanf("%f %f", &x3, &y3);

    //checking collinearity of the point 
    float area = ((x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2))) / 2.0;


    if(area == 0) 
       printf("The points are collinear.");
    
    else 
        printf("The points are not collinear. ");

    return 0;
}