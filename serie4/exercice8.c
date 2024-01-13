#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nb_elem;
    int *tab;
} TypeTableau;

// Fonction pour créer un tableau de n éléments
TypeTableau creationTableau(int n) {
    TypeTableau tableau;
    tableau.nb_elem = n;
    tableau.tab = (int *)malloc(n * sizeof(int));
    return tableau;
}

// Fonction pour libérer la mémoire occupée par un tableau
void destructionTableau(TypeTableau T) {
    free(T.tab);
}

// Fonction pour lire les éléments d'un tableau au clavier
void simpleLectureTableau(TypeTableau T) {
    printf("Saisir les éléments du tableau :\n");
    for (int i = 0; i < T.nb_elem; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &T.tab[i]);
    }
}

// Fonction pour créer un nouveau tableau avec le double des éléments du tableau d'origine
TypeTableau affichage(TypeTableau T) {
    TypeTableau nouveauTableau;
    nouveauTableau.nb_elem = T.nb_elem;
    nouveauTableau.tab = (int *)malloc(T.nb_elem * sizeof(int));

    for (int i = 0; i < T.nb_elem; i++) {
        nouveauTableau.tab[i] = 2 * T.tab[i];
    }

    return nouveauTableau;
}

int main() {
    int n;
    TypeTableau tab,nouveauTableau;
    printf("Saisir la taille du tableau : ");
    scanf("%d", &n);
    tab = creationTableau(n);
    simpleLectureTableau(tab);
    printf("\nTableau d'origine :\n");
    for (int i = 0; i < tab.nb_elem; i++) {
        printf("%d ", tab.tab[i]);
    }
    printf("\n");
    nouveauTableau = affichage(tab);
    printf("\nNouveau tableau avec le double des éléments :\n");
    for (int i = 0; i < nouveauTableau.nb_elem; i++) {
        printf("%d ", nouveauTableau.tab[i]);
    }
    printf("\n");
    destructionTableau(tab);
    destructionTableau(nouveauTableau);

    return 0;
}

