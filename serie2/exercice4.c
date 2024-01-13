#include <stdio.h>


int longueur_chaine1(const char* chaine) {
    int taille = 0;
    while (chaine[taille] != '\0') {
        taille++;
    }
    return taille;
}

int main() {
    char cTab1[] = "Hello";
    char cTab2[] = "World";
    printf("la longueure de cTab1: %d\n", longueur_chaine1(cTab1));
    printf("la longueure de cTab2: %d\n", longueur_chaine1(cTab2));
    return 0;
}
