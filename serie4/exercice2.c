#include <stdio.h>

// Structure pour représenter une date
typedef struct date {
    int jour;
    char mois[10];
    int annee;
} date;

// Structure pour représenter un employé
typedef struct employe {
    char nom[15];
    char prenom[15];
    date date_naissance;
    date date_embauche;
} employe;

int main() {
    // Déclaration d'un tableau de 4 employés
    employe employes[4];

    // Lecture des informations pour 4 employés
    for (int i = 0; i < 4; i++) {
        printf("Saisir les informations pour l'employé %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", employes[i].nom);

        printf("Prenom : ");
        scanf("%s", employes[i].prenom);

        printf("Date de naissance (jour mois annee) : ");
        scanf("%d %s %d", &employes[i].date_naissance.jour, employes[i].date_naissance.mois, &employes[i].date_naissance.annee);

        printf("Date d'embauche (jour mois annee) : ");
        scanf("%d %s %d", &employes[i].date_embauche.jour, employes[i].date_embauche.mois, &employes[i].date_embauche.annee);
    }

    // Affichage des informations des employés
    for (int i = 0; i < 4; i++) {
        printf("\nEmployé %d :\n", i + 1);
        printf("Nom : %s\n", employes[i].nom);
        printf("Prenom : %s\n", employes[i].prenom);
        printf("Date de naissance : %d %s %d\n", employes[i].date_naissance.jour, employes[i].date_naissance.mois, employes[i].date_naissance.annee);
        printf("Date d'embauche : %d %s %d\n", employes[i].date_embauche.jour, employes[i].date_embauche.mois, employes[i].date_embauche.annee);
    }

    return 0;
}
