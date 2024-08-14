#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function prototyping
double findCircumference(double radius);

// Main function
int main(void)
{
    // Variable declaration
    double radius;
    double circumference;
    printf("Enter the radius of a circle to calculate the circumference: ");
    scanf("%lf", &radius);
    // Invoke the function defined down bellow
    circumference = findCircumference(radius);
    printf("The circumference is: %.2lf\n", circumference);
    return 0;
}

// Function definition
double findCircumference(double radius)
{
    const double PI = 3.14;
    return 2 * PI * radius;
}