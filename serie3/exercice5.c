#include <stdio.h>
#include <string.h>

// Fonction pour calculer la fréquence d'occurrence d'un mot dans une phrase
int frequence_mot(const char *phrase, const char *mot) {
    int longueur_phrase = strlen(phrase);
    int longueur_mot = strlen(mot);
    int frequence = 0;
    int i;
    if (longueur_phrase < longueur_mot) {
        return 0;
    }

    for (i = 0; i <= longueur_phrase - longueur_mot; i++) {
        if (strncmp(&phrase[i], mot, longueur_mot) == 0) {
            frequence++;
        }
    }

    return frequence;
}

int main() {
    const char *phrase = "un mot qui mot ne peut etre mot des mots";
    const char *mot_recherche = "mot";
    int resultat = frequence_mot(phrase, mot_recherche);
    printf("La fréquence du mot \"%s\" dans la phrase est : %d\n", mot_recherche, resultat);
    return 0;
}
