#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/* Global variables */

/* Function prototyping */
double calculateHypothenuse(double adjacent, double perpendicular);

/* Main function */
int main(void)
{
    // Variable declaration
    double x, y, z;
    printf("Enter the adjacent of a triangle: ");
    scanf("%lf", &x);
    printf("Enter tye perpendicular of a triangle: ");
    scanf("%lf", &y);
    // Invoke the function defined down bellow
    z = calculateHypothenuse(x, y);
    printf("The hypothenuse is: %.2lf\n", z);
    return 0;
}

/* Function definition */
double calculateHypothenuse(double adjacent, double perpendicular)
{
    return sqrt(adjacent * adjacent + perpendicular * perpendicular);
}