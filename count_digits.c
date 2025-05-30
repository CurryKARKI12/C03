// Exo3: count_digits.c
// Compter combien de chiffres contient un entier

#include <stdio.h>

int main() {
    int n, count = 0;

    // Lecture de l'entier
    scanf("%d", &n);

    int original = n;

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);
    return 0;
}
