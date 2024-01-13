#include <stdio.h>

// les prototypes des fonctions
int addition(int A, int B);
int soustraction(int A, int B);
int multiplication(int A, int B);
int division(int A, int B);
int modulo(int A, int B);

int main() {
    char operateur, choix;
    int nombre1, nombre2, resultat;

    do {
        
        printf("Entrez une expression: ");
        scanf("%d %c %d", &nombre1, &operateur, &nombre2);

        switch (operateur)
        {
            case '+':
                resultat = addition(nombre1, nombre2);
                break;
            case '-':
                resultat = soustraction(nombre1, nombre2);
                break;
            case '*':
                resultat = multiplication(nombre1, nombre2);
                break;
            case '/':
                
                if (nombre2 != 0) {
                    resultat = division(nombre1, nombre2);
                } else {
                    printf("Erreur : Division par zero.\n");
                    continue;  
                }
                break;
            case '%':
               
                if (nombre2 != 0) {
                    resultat = modulo(nombre1, nombre2);
                } else {
                    printf("Erreur : Division par zero.\n");
                    continue; 
                }
                break;
            default:
                printf("Erreur : Operateur non valide.\n");
                continue;  
        }

        
        printf("Le resultat est : %d\n", resultat);

        
        printf("Voulez-vous recommencer ? (O/N) : ");
        scanf(" %c", &choix);  

    } while (choix == 'O' || choix == 'o');

    return 0;
}

// Définition des fonctions
int addition(int A, int B) {
    return A + B;
}

int soustraction(int A, int B) {
    return A - B;
}

int multiplication(int A, int B) {
    return A * B;
}

int division(int A, int B) {
    return A / B;
}

int modulo(int A, int B) {
    return A % B;
}
