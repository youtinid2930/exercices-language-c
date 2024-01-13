#include <stdio.h>
#include <string.h>


void traiter_phrase(char *phrase) {
    int longueur = strlen(phrase);
    int index_destination = 0;
    int debut = 1,i; 

    for (i = 0; i < longueur; i++) {
        if (phrase[i] == ' ' || phrase[i] == '\t') {
           
            if (debut) {
                continue;
            } else {
                phrase[index_destination++] = ' ';
                debut = 1; 
            }
        } else {
            
            phrase[index_destination++] = phrase[i];
            debut = 0; 
        }
    }

    
    phrase[index_destination] = '\0';
}

int main() {
    char phrase[] = "  hi   how are  you today   ";
    
    printf("phrase d'origine : \"%s\"\n", phrase);

    traiterPhrase(phrase);

    printf("phrase traitée   : \"%s\"\n", phrase);

    return 0;
}
