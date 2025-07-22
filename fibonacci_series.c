// Exo2: fibonacci_series.c
// Afficher la série de Fibonacci jusqu'à une valeur limite donnée

#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next; // a,premier terme et b deuxieme terme 

    // Lecture de la valeur limite
    scanf("%d", &limit);

    printf("Fibonacci : ");

    if (limit >= 0) {  // cas special: si la mimite est au moins 1 on affiche a qui vaut 0, car 0 est toujour le premier terme de la série
        printf("0 ");
    }
    if (limit >= 1) {
        printf("1 ");
    }

    next = a + b; // on calcule le prochain terme de la serie Fibonacci en additionnant les deux précédents donc 0 + 1 =1 
// boucle pour afficher les termes suivants 
    while (next <= limit) {
        printf("%d ", next);
        a = b; // on met a jour a avec la veleur précédente de b
        b = next; // et b prend la valeur de next donc du terme suivant 
        next = a + b; // et la on additionne les deux termes precédents pour avoir le terme suivant selon la régle de Fibonnaci
    }

    printf("\n");
    return 0;
}
 
