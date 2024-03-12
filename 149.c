//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit);

int main() {
    float fahrenheit, celsius;

    printf("Fahrenheit derecesini girin: ");
    scanf("%f", &fahrenheit);

    celsius = fahrenheitToCelsius(fahrenheit);

    printf("%.2f Fahrenheit, %.2f Celsius'a esittir.\n", fahrenheit, celsius);

    return 0;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
