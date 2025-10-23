/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
DescriptionFahrenheit to Celsius Conversion
*/
#include <stdio.h>
//fuctionin covertion of fahrenheit to Celsius conversion //
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0;
}