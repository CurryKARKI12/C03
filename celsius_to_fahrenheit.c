// Exo5: celsius_to_fahrenheit.c
// Convertir une température de Celsius vers Fahrenheit

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lecture de la température en Celsius
    scanf("%f", &celsius);

    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit); // 1f signifit que le résultat sera un nombre flottant ou a virgule avec 1 chiffre apres la virgule, F lui permet de remplacer C par F  
    return 0;
}
