// Exo2: fibonacci_series.c
// Afficher la série de Fibonacci jusqu'à une valeur limite donnée

#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    // Lecture de la valeur limite
    scanf("%d", &limit);

    printf("Fibonacci : ");

    if (limit >= 0) {
        printf("0 ");
    }
    if (limit >= 1) {
        printf("1 ");
    }

    next = a + b;

    while (next <= limit) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("\n");
    return 0;
}
 // Attention ici la valeur doit etre limiter a 6 valeurs 