#include <stdio.h>


typedef struct etudiant {
    char nom[15];
    char prenom[15];
    int CNE;
    float notes[4];
    float moyenne;
} etudiant;

// fonction pour rechercher l'étudiant ayant la plus grande moyenne
int chercher_meilleur_etudiant(etudiant T[], int taille) {
    int index_meilleur = 0,i;
    float meilleur_moyenne = T[0].moyenne;

    for (i = 1; i < taille; i++) {
        if (T[i].moyenne > meilleur_moyenne) {
            index_meilleur = i;
            meilleur_moyenne = T[i].moyenne;
        }
    }

    return index_meilleur;
}

// fonction pour trier le tableau d'étudiants en ordre décroissant selon la moyenne (méthode de tri bulle)
void trie_par_moyenne(etudiant T[], int taille) {
    int i,j;
    etudiant temp;
    for (i = 0; i < taille - 1; i++) {
        for (j = 0; j < taille - i - 1; j++) {
            if (T[j].moyenne < T[j + 1].moyenne) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }
}

int main() {
    etudiant T[5];
    int i,j,index_meilleur;
    for (i = 0; i < 5; i++){
        printf("Saisir les informations pour l'etudiant %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", T[i].nom);
        printf("Prenom : ");
        scanf("%s", T[i].prenom);
        printf("CNE : ");
        scanf("%d", &T[i].CNE);
        printf("Notes (4 notes) : ");
        for (j = 0; j < 4; j++) {
            scanf("%f", &T[i].notes[j]);
        }
        // calcul de la moyenne
        T[i].moyenne = 0;
        for (j = 0; j < 4; j++) {
            T[i].moyenne += T[i].notes[j];
        }
        T[i].moyenne /= 4;
    }

    // recherche et affichage de l'étudiant avec la plus grande moyenne
    index_meilleur = chercher_meilleur_etudiant(T, 5);
    printf("\nInformations de l'etudiant ayant la plus grande moyenne :\n");
    printf("Nom : %s\n", T[index_meilleur].nom);
    printf("Prenom : %s\n", T[index_meilleur].prenom);
    printf("CNE : %d\n", T[index_meilleur].CNE);
    printf("Moyenne : %f\n", T[index_meilleur].moyenne);

    // tri du tableau en ordre décroissant selon la moyenne
    trie_par_moyenne(T, 5);

    // affichage du tableau trié
    printf("\nTableau d'etudiants trie en ordre decroissant selon la moyenne :\n");
    for (i = 0; i < 5; i++) {
        printf("Nom : %s, Prenom : %s, CNE : %d, Moyenne : %f\n", T[i].nom, T[i].prenom, T[i].CNE, T[i].moyenne);
    }
    return 0;
}
