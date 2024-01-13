#include <stdio.h>

// Définition de la structure pour représenter un panneau de bois
typedef struct {
    int largeur;
    int longueur;
    int epaisseur;
    int typebois; // 0 pour pin, 1 pour chêne, 2 pour hêtre
} panneau;

// Fonction de saisie d'un panneau de bois
void saisie_panneau(panneau *panne) {
    printf("Saisir les informations du panneau :\n");
    printf("Largeur (mm) : ");
    scanf("%d", &panne->largeur);

    printf("Longueur (mm) : ");
    scanf("%d", &panne->longueur);

    printf("Epaisseur (mm) : ");
    scanf("%d", &panne->epaisseur);

    printf("Type de bois (0 pour pin, 1 pour chêne, 2 pour hêtre) : ");
    scanf("%d", &panne->typebois);
}

// Fonction d'affichage d'un panneau de bois
void affichage_panneau(panneau panne){
    printf("\nInformations du panneau :\n");
    printf("Largeur : %d mm\n", panne.largeur);
    printf("Longueur : %d mm\n", panne.longueur);
    printf("Epaisseur : %d mm\n", panne.epaisseur);
    switch (panne.typebois) {
        case 0:
            printf("Type de bois : Pin\n");
            break;
        case 1:
            printf("Type de bois : Chêne\n");
            break;
        case 2:
            printf("Type de bois : Hêtre\n");
            break;
        default:
            printf("Type de bois inconnu\n");
    }
}

// Fonction pour calculer le volume en mètres cubes d'un panneau
double calcule_volume(panneau panne) {
    return (double)(panne.largeur * panne.longueur * panne.epaisseur) / 1000000000.0;
}

int main() {
    panneau nom_panneau;
    double volume;
    
    saisie_panneau(&nom_panneau);
    affichage_panneau(nom_panneau);
    volume = calcule_volume(nom_panneau);
    printf("\nVolume du panneau : %.6f m^3\n", volume);

    return 0;
}
