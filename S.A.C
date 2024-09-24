//program to calculate surface area of a cylinder

#include <stdio.h>
#define PI 3.14159

int main() {
    double radius, height, surfaceArea;

    // Input radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate the surface area
    surfaceArea = 2 * PI * radius * (height + radius);

    // Output the result
    printf("The surface area of the cylinder is: %.2f\n", surfaceArea);

    return 0;
}