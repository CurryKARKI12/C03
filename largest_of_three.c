// Exo1: largest_of_three.c
// Lire trois entiers et afficher le plus grand

#include <stdio.h>

int main() {
    int a, b, c;

    // Lecture des trois entiers
    scanf("%d %d %d", &a, &b, &c);

    // Vérification pour trouver le plus grand
    if (a >= b && a >= c) {
        printf("Le plus grand nombre est : %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Le plus grand nombre est : %d\n", b);
    } else {
        printf("Le plus grand nombre est : %d\n", c);
    }

    return 0;
}
