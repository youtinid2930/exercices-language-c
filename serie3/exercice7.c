#include <stdio.h>

// Fonction pour rechercher une valeur dans un tableau de flottants
int search(float tableau[], int taille, float valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int taille,position;
    float *monTableau;
    float valeur_recherchee;
    printf("entrez la taille du tableau : ");
    scanf("%d", &taille);
    monTableau = malloc(taille * sizeof(float));
    if (monTableau == NULL) {
        fprintf(stderr, "erreur d'allocation de mémoire.\n");
        return 1;
    }
    printf("entrez les valeurs du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%f", &monTableau[i]);
    }
    printf("Entrez la valeur à rechercher : ");
    scanf("%f", &valeur_recherchee);
    position = search(monTableau, taille, valeur_recherchee);
    if (position != -1) {
        printf("La valeur %f a été trouvée à la position %d dans le tableau.\n", valeur_recherchee, position);
    } else {
        printf("La valeur %f n'a pas été trouvée dans le tableau.\n", valeur_recherchee);
    }
    free(monTableau);
    return 0;
}
