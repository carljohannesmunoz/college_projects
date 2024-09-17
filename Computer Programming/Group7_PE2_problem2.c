#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the sides, perimeter, semiperimeter, and area
    int a, b, c;
    float perimeter, s, area;

    // Input the values of the sides
    printf("Please input values for the 3 sides (in meters): ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the perimeter
    perimeter = a + b + c;

    // Calculate the semiperimeter
    s = (a + b + c) / 2.0;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output the results
    printf("Perimeter = %.2f m\n", perimeter);
    printf("Area = %.2f sq.m.\n", area);

    return 0;
}