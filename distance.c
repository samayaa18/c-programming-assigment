#include <stdio.h>

int main(void) {
    double speed, time;
    double distance;
    double meters, centimeters, millimeters;

    // Read speed and time
    printf("Enter speed (km/h): ");
    scanf("%lf", &speed);

    printf("Enter time (hours): ");
    scanf("%lf", &time);

    // Calculate base distance in kilometers
    distance = speed * time;

    // Convert kilometers to other metric units
    meters = distance * 1000;
    centimeters = distance * 100000;
    millimeters = distance * 1000000;

    // Display results
    printf("\nDistance traveled:\n");
    printf("Meters      : %.2f m\n", meters);
    printf("Centimeters : %.2f cm\n", centimeters);
    printf("Millimeters : %.2f mm\n", millimeters);

    return 0;
}