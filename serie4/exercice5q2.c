#include <stdio.h>

int pos_car(char T[], int n, char c, int *p_occ, int *d_occ) {
    int nombre_occurrences = 0,i;

    for (i = 0; i < n; i++) {
        if (T[i] == c) {
            if (nombre_occurrences == 0) {
                *p_occ = i; // Enregistre l'indice de la première occurrence
            }
            *d_occ = i; // Mise à jour de l'indice de la dernière occurrence
            nombre_occurrences++;
        }
    }

    return nombre_occurrences;
}

int main() {
    char T[] = "baaabacaab";
    int n = sizeof(T) - 1; // Taille du tableau T
    char c = 'a';
    int p_occ, d_occ;

    int nombre_occurrences = pos_car(T, n, c, &p_occ, &d_occ);

    printf("Le nombre d'occurrences de '%c' dans le tableau est : %d\n", c, nombre_occurrences);
    printf("La première occurrence est à l'indice : %d\n", p_occ);
    printf("La dernière occurrence est à l'indice : %d\n", d_occ);

    return 0;
}
