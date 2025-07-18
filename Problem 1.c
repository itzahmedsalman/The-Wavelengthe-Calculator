#include<stdio.h>
#include<math.h>
int main()
{
    //Assigning variables
    int m;
    double d, theta, wave_length;


    //Collecting input data
    printf("Enter the difference between the slits(d) in micrometer(10^-6): ");
    scanf("%lf", &d);

    printf("Enter the angular deviation(theta) in degrees: ");
    scanf("%lf", &theta);

    printf("Enter the order of maximum (m): ");
    scanf("%d", &m);


    //Conversion of angle from degree to radian
    double radian = theta * (M_PI/180.0);


    //Calculating the wavelength
    wave_length = (d * 0.00001 * sin(radian))/ (m * 0.00000001);


    //Printing the numeric value of the wavelength
    printf("\nThe numeric value of the wavelength is %lf Nanometer\n", wave_length);


    //Defining the colour of the light based on the wavelenth


    return 0;
}
