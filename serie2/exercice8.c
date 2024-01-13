#include <stdio.h>
#include <string.h>

int main() {
    char noms[100][21];
    int nb = 0;
    int i = 0;
    do {
        printf("Entrez un nom (ou 'fin' pour terminer) : ");
        scanf("%s", noms[i]);
        if (strcmp(noms[i], "fin") == 0) {
            break;
        }
        if (strlen(noms[i]) > 10) {
            nb++;
        }
        if (++i >= 100) {
            printf("Nombre maximum de noms atteint. Fin de la saisie.\n");
            break;
        }

    } while (1);

    printf("Nombre de noms avec plus de dix caractères : %d\n", nb);

    return 0;
}
