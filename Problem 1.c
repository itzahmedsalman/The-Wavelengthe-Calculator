#include<stdio.h>
#include<math.h>
int main()
{
    int m;

    double d, theta, wave_length;

    printf("Enter the difference between the slits(d) in micrometer(10^-6): ");
    scanf("%lf", &d);

    printf("Enter the angular deviation(theta) in degrees: ");
    scanf("%lf", &theta);

    printf("Enter the order of maximum (m): ");
    scanf("%d", &m);

    double radian = theta * (M_PI/180.0);

    wave_length = (d * 0.00001 * sin(radian))/ (m * 0.00000001);

    printf("The numeric value of the wavelength is %lf\n", wave_length);



    return 0;
}
