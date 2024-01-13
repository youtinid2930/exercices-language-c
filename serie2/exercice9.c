#include <stdio.h>
#include <string.h>



// Fonction pour saisir une chaîne de caractères
void saisir(char chaine[100]) {
    printf("Entrez une chaine de caracteres : ");
    scanf(" %[^\n]", chaine);
}

// Fonction pour afficher une chaîne de caractères
void afficher(char chaine[100]) {
    printf("Chaine actuelle : %s\n", chaine);
}

// Fonction pour inverser une chaîne de caractères
void inverser(char chaine[100]){
    int longueur = strlen(chaine);
    for (int i = 0; i < longueur / 2; i++) {
        char temp = chaine[i];
        chaine[i] = chaine[longueur - 1 - i];
        chaine[longueur - 1 - i] = temp;
    }
}

// Fonction pour compter le nombre de mots dans une chaîne
int compter_mots(char chaine[100]){
    int mots = 0;
    int estDansMot = 0;

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == ' ' || chaine[i] == '\t' || chaine[i] == '\n') {
            estDansMot = 0;
        } else {
            if (estDansMot == 0) {
                mots++;
                estDansMot = 1;
            }
        }
    }

    return mots;
}

int main() {
    char chaine[100] = {'\0'};
    int choix;

    do {
        printf("\nMenu d'operations sur la chaine de caracteres :\n");
        printf("1. Saisir une chaine\n");
        printf("2. Afficher la chaine\n");
        printf("3. Inverser la chaine\n");
        printf("4. Compter les mots dans la chaine\n");
        printf("5. Quitter\n");

        printf("Choisissez une operation (1-5) : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisir(chaine);
                break;
            case 2:
                afficher(chaine);
                break;
            case 3:
                inverser(chaine);
                printf("Chaine inverse : %s\n", chaine);
                break;
            case 4:
                printf("Nombre de mots dans la chaine : %d\n", compter_mots(chaine));
                break;
            case 5:
                break;
            default:
                printf("Choix invalide. Veuillez choisir un nombre entre 1 et 5.\n");
        }

        printf("Frapper une touche pour revenir au menu...\n");
        getchar(); 
        getchar(); 
    } while (choix != 5);

    return 0;
}
