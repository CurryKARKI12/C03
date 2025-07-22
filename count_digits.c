// Exo3: count_digits.c
// Compter combien de chiffres contient un entier

#include <stdio.h>

int main() {
    int n, count = 0;

    // Lecture de l'entier
    scanf("%d", &n);

    int original = n; // ici on garde une copie de la valeur entrée par UI pour l'affichage a la fin 

    if (n == 0) {
        count = 1; // si n = 0 alors le compteur considerera la réponse 1 sinon la boucle suivante ne fonctionne pas 
    } else {
        while (n != 0) {  // cette boucle divide le nombre par 10 a chaque itération ce qui décale un chiffre a droite (345/10 =34/10=3;3/10=0)   
            n = n / 10;
            count++; // a la fin count donnera le nombre total de chiffre grace a count 
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);
    return 0;
}
