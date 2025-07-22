// Exo4: reverse_number.c
// Inverser les chiffres d’un entier

#include <stdio.h>

int main() {
    int n, reversed = 0; //le nombre inversé initialisé a 0

    // Lecture du nombre
    scanf("%d", &n);

    while (n != 0) {  // tant que n n'est pas égal a zero alors on execute les instructions de la boucle comme suit 
        reversed = reversed * 10 + n % 10; // n% 10 recupére le dernider chiffre de n,reversed *10 +...ajoute ce chiffre a la fin de reversed et n/10 supprime le dernier chiffre de n
        n = n / 10;
    }

    printf("Nombre inversé : %d\n", reversed);
    return 0;
}
