#include <stdio.h>

int main() {

    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celsius = 5 * (fahrenheit - 32) / 9;

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
