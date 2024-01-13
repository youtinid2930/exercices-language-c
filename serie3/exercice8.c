#include <stdio.h>
#include <string.h>

// Fonction pour effectuer le Run-Length Encoding 
void run_length_encoding(char *chaine) {
    int longueur = strlen(chaine),i,count;
    for (i = 0; i < longueur; i++) {
        count = 1;
        while (i < longueur - 1 && chaine[i] == chaine[i + 1]) {
            count++;
            i++;
        }
        printf("%d%c", count,chaine[i]);
    }
}

int main() {
    char chaine[100];
    printf("Entrez la chaine à encoder : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';
    printf("Chaine avant le codage : %s\n", chaine);
    printf("Chaine après le codage : ");
    run_length_encoding(chaine);
    printf("\n");
    return 0;
}
