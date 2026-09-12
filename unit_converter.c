#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Prompt the user to enter the temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Convert Fahrenheit to Celsius using the conversion formula
    // Note: 5.0 and 9.0 are used to ensure floating-point division instead of integer truncation
    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

    // Display both the original Fahrenheit and converted Celsius values rounded to exactly two decimal places
    printf("\n--- Temperature Conversion Result ---\n");
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Celsius:    %.2f °C\n", celsius);

    return 0;
}