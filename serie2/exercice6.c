#include <stdio.h>

int main() {
    int c;
    int chiffres = 0, espacements = 0, autres = 0;

    printf("Entrez une chaîne de caracteres:\n");

    while ((c = getchar())!=EOF) {
        if (c >= '0' && c <= '9') {
            chiffres++;
        }
        else if (c == ' ' || c == '\t' || c == '\n') {
            espacements++;
        }
        else {
            autres++;
        }
    }
    printf("Chiffres : %d\n", chiffres);
    printf("Espacements : %d\n", espacements);
    printf("Autres : %d\n", autres);

    return 0;
}
