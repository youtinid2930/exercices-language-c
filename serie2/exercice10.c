#include <stdio.h>
#include <string.h>
#include <limits.h> // pour utiliser __INT_MAX__

// Fonction pour calculer la distance de Hamming entre deux chaînes
int distanceH(const char *S1, const char *S2) {
    int distance = 0,longueurS1 = 0,longueurS2 = 0; 
    while (S1[longueurS1] != '\0') {
        longueurS1++;
    } 
    while (S2[longueurS2] != '\0') {
        longueurS2++;
    }

    if (longueurS1 != longueurS2) {
        printf("Les chaines n'ont pas la meme longueur.\n");
        return -1;
    }
    for (int i = 0; i < longueurS1; i++) {
        if (S1[i] != S2[i]) {
            distance++;
        }
    }

    return distance;
}
// Fonction pour calculer la distance de Hamming du langage
int distanceH_language(const char *language[], int size) {
    int i,j,current_distance,min_hamming_distance = __INT_MAX__; // initialiser min_hamming_distance par la plus grand nombre qui peut contient un int
    if (size <= 1) {
        fprintf(stderr, "Le tableau doit contenir au moins deux chaînes.\n");
        return -1; 
    }
    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++) {
            current_distance = distanceH(language[i], language[j]);

            if (current_distance < 0) {
                return -1; 
            }

            if (current_distance < min_hamming_distance) {
                min_hamming_distance = current_distance;
            }
        }
    }
    return min_hamming_distance;
}
// Fonction pour obtenir la représentation binaire d'un nombre sur un octet
void binaire(int n, char binaireStr[9]) {
    int i;
    if (n < 0 || n > 255) {
        fprintf(stderr, "Erreur : Le nombre doit être compris entre 0 et 255.\n");
        return;
    }

    for (i = 7; i >= 0; i--) {
        binaireStr[7 - i] = ((n & (1 << i)) ? '1' : '0');
    }
    binaireStr[8] = '\0'; 
}

// Fonction pour calculer la distance de Hamming entre deux nombres
int distanceNombre(int A, int B){
    int distance = 0;
    if (A < 0 || A > 255 || B < 0 || B > 255) {
        fprintf(stderr, "Erreur : Les nombres doivent être compris entre 0 et 255.\n");
        return -1; 
    }
    char binaireA[9], binaireB[9];
    binaire(A, binaireA);
    binaire(B, binaireB);
    for (int i = 0; i < 8; i++) {
        if (binaireA[i] != binaireB[i]) {
            distance++;
        }
    }
    return distance;
}
int main() {
    char chaine1[] = "sure";
    char chaine2[] = "cure";
    char language[]={"aabb", "xayy", "tghy", "xgyy"};
    int distance = distanceH(chaine1, chaine2),size = sizeof(language) / sizeof(language[0]);
    int resultat = distance_language(language, size);
    int nombre1 = 45,nombre2 = 89;
    char binaireStr1[9], binaireStr2[9];
    if (distance != -1) {
        printf("La distance de Hamming entre \"%s\" et \"%s\" est : %d\n", chaine1, chaine2, distance);
    }
    if (resultat >= 0) {
        printf("La distance de Hamming du langage est : %d\n", resultat);
    }
    binaire(nombre1, binaireStr1);
    binaire(nombre2, binaireStr2);
    printf("Représentation binaire de %d : %s\n", nombre1, binaireStr1);
    printf("Représentation binaire de %d : %s\n", nombre2, binaireStr2);

    int resultat = distanceNombre(nombre1, nombre2);
    if (resultat >= 0) {
        printf("La distance de Hamming entre %d et %d est : %d\n", nombre1, nombre2, resultat);
    }

    return 0;
}
