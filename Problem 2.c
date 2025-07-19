#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    // n1 = order for green light
    // n2 = order for red light
    // lambda1 = wavelength of green light (530 nm)
    // lambda2 = wavelength of red light (700 nm)
    // angle1_degree = given angle for green light in degrees
    // angle1_radius = angle1_degree converted to radians
    // d = grating spacing calculated using green light
    // sin_theta2 = sin(angle) for red light (2nd order)
    // theta2_radius = angle for red light in radians
    // theta2_degree = angle for red light converted to degrees

    int n1 = 3, n2 = 2;
    double angle1_degrees = 65.0, lambda1 = 530e-9, lambda2 = 700e-9;
    double theta2_radians,theta2_degrees;

    double angle1_radians = angle1_degrees * PI / 180;
    double d = (n1 * lambda1) / sin(angle1_radians);
    double sin_theta2 = (n2 * lambda2) / d;

    if (sin_theta2 > 1.0) {
        printf("No 2nd-order spot for red light (angle too large).\n");
    } else {
        theta2_radians = asin(sin_theta2);
        theta2_degrees = theta2_radians * 180 / PI;
        printf("Second-order red light angle: %.2f degrees\n", theta2_degrees);
    }

    return 0;
}

