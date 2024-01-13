#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    size_t len;
    char *debut,*fin,temp;
    char *nom = (char *)malloc(30 * sizeof(char)); 
    if (nom == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire.\n");
        return 1;
    }
    printf("Entrez un nom : ");
    fgets(nom, 30, stdin);
    len = strlen(nom);
    if (len > 0 && nom[len - 1] == '\n') {
        nom[len - 1] = '\0';
    }
    *debut = nom;           
    *fin = nom + strlen(nom) - 1; 
    while (debut < fin) {
        
        temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }
    printf("Nom inversé : %s\n", nom);
    free(nom);

    return 0;
}
