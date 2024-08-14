#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* Global variables */
const double PI = 3.14;

/* Function prototyping */

// Calculate circumference
double findCircumference(double radius);

// Calculate area
double findArea(double radius);

// Main function
int main(void)
{
    // Variable declaration
    double radius;
    double circumference;
    double area;
    printf("Enter the radius of a circle to calculate the circumference: ");
    scanf("%lf", &radius);
    // Invoke the function defined down bellow
    circumference = findCircumference(radius);
    area = findArea(radius);
    printf("The circumference is: %.2lf\n", circumference);
    printf("The area is: %2.lf\n", area);
    return 0;
}

/* Function definition */
double findCircumference(double radius)
{
    return 2 * PI * radius;
}

double findArea(double radius)
{
    return PI * radius * radius;
}