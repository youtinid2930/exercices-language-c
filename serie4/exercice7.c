#include <stdio.h>

typedef struct {
    int reference;
    int codeProduit; // 1 pour carte mère, 2 pour processeur, 3 pour barrette mémoire, 4 pour carte graphique
    double prix;
    int quantiteDisponible;
} Produit;

// Fonction de saisie d'un produit
void saisie_produit(Produit *produit) {
    printf("Saisir les informations du produit :\n");
    printf("Reference : ");
    scanf("%d", &produit->reference);

    printf("Code produit (1 pour carte mère, 2 pour processeur, 3 pour barrette mémoire, 4 pour carte graphique) : ");
    scanf("%d", &produit->codeProduit);

    printf("Prix (en DH) : ");
    scanf("%lf", &produit->prix);

    printf("Quantité disponible : ");
    scanf("%d", &produit->quantiteDisponible);
}

// Fonction d'affichage d'un produit
void affichage_produit(Produit produit) {
    printf("\nInformations du produit :\n");
    printf("Reference : %d\n", produit.reference);

    switch (produit.codeProduit) {
        case 1:
            printf("Type de produit : Carte mère\n");
            break;
        case 2:
            printf("Type de produit : Processeur\n");
            break;
        case 3:
            printf("Type de produit : Barrette mémoire\n");
            break;
        case 4:
            printf("Type de produit : Carte graphique\n");
            break;
        default:
            printf("Type de produit inconnu\n");
    }

    printf("Prix : %.2f DH\n", produit.prix);
    printf("Quantité disponible : %d\n", produit.quantiteDisponible);
}

// Fonction pour saisir une commande d'un produit
void saisieCommande(Produit *produit) {
    int quantite_commande;

    printf("Saisir la quantité commandée : ");
    scanf("%d", &quantite_commande);

    if (quantite_commande <= produit->quantiteDisponible) {
        double prix_total = quantite_commande * produit->prix;

        printf("\nCommande :\n");
        printf("Reference : %d\n", produit->reference);

        switch (produit->codeProduit) {
            case 1:
                printf("Type de produit : Carte mère\n");
                break;
            case 2:
                printf("Type de produit : Processeur\n");
                break;
            case 3:
                printf("Type de produit : Barrette mémoire\n");
                break;
            case 4:
                printf("Type de produit : Carte graphique\n");
                break;
            default:
                printf("Type de produit inconnu\n");
        }

        printf("Prix unitaire : %.2f DH\n", produit->prix);
        printf("Quantité commandée : %d\n", quantite_commande);
        printf("Prix total de la commande : %.2f DH\n", prix_total);
    } else {
        printf("Quantité commandée supérieure à la quantité disponible.\n");
    }
}

int main() {
    Produit prod;
    saisie_produit(&prod);
    affichage_produit(prod);
    saisieCommande(&prod);
    return 0;
}
