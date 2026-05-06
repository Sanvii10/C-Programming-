#include <stdio.h>

int main() {
    float x, y, z;
// Take sides of a triangle from user
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f" , &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
    printf("Sides of a triangle must be positive and non-zero.\n");
    }

// Check if the triangle is valid or not
if (((x + y )> z) && ((x + z) > y) && ((y + z) > x)) {
    printf("The given sides form a valid triangle.\n"); 

if (x == y && y == z ) {
    printf("It is an equilateral triangle.\n");
}
else if (x == y|| y == z || z == x ) {
    printf("It is an isoceles triangle.\n");
}
else {
    printf("It is a scalene triangle.\n");
}
if ((x*x==y*y+z*z) || (y*y==x*x+z*z) || (z*z==y*y+x*x)){
    printf("It is a right angled triangle.\n");
}
    

}
else { 
     printf("The given triangle is not valid.\n");
}

    return 0;
    
} 