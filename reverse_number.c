// Exo4: reverse_number.c
// Inverser les chiffres d’un entier

#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Lecture du nombre
    scanf("%d", &n);

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }

    printf("Nombre inversé : %d\n", reversed);
    return 0;
}
