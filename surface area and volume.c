#include <stdio.h>
#include <math.h>

int main() {
    
    double side, Area, volume;

    // Prompt the user to enter the side length of the cube
    printf("Enter the side length of the cube: ");
    scanf("%lf", &side);

    // Calculate the surface area and volume
    Area = 6 * pow(side, 2);
    volume = pow(side, 3);

    printf("Surface Area: %.2lf\n", Area);
    printf("Volume : %.2lf\n", volume);

    return 0;
}
