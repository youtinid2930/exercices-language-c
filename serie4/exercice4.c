#include <stdio.h>

typedef struct {
    char nom[50];
    char prenom[50];
    char telephone[15];
} repera;

// Fonction pour afficher toutes les données du répertoire
void afficher_reperatoire(repera repertoire[], int taille) {
    printf("\nListe du repertoire :\n");
    for (int i = 0; i < taille; i++) {
        printf("Nom    : %s\n", repertoire[i].nom);
        printf("Prenom : %s\n", repertoire[i].prenom);
        printf("Tel    : %s\n", repertoire[i].telephone);
        printf("-------------------------\n");
    }
}

int main() {
    
    repera repertoire[100];  
    int nbentrer;
    printf("Combien d'entrées souhaitez-vous ajouter au répertoire ? ");
    scanf("%d", &nbentrer);

    for (int i = 0; i < nbentrer; i++) {
        printf("Entrée %d :\n", i + 1);
        printf("Nom    : ");
        scanf("%s", repertoire[i].nom);
        printf("Prenom : ");
        scanf("%s", repertoire[i].prenom);
        printf("Tel    : ");
        scanf("%s", repertoire[i].telephone);
    }

    afficher_reperatoire(repertoire, nbentrer);

    return 0;
}
