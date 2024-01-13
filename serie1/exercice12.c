#include <stdio.h>

int main() {
    int n,taille;
    printf("Entrez la taille totale du carré : ");
    scanf("%d", &n);
    taille= 2 * n - 1;
    for(int i = 1; i <= taille; i++){
        for(int j = 1; j <= taille; j++){
            if(i == 1 || i == taille || j == 1 || j == taille) {
                printf("* ");
            }else if(i == j  || i + j == taille + 1){
                printf("+ ");
            }else if(j == n) {
                printf("| ");
            }else if(i == n) {
                printf("- ");
            }else{
                printf("  ");
            }
        }
        
        printf("\n");
    }

    return 0;
}
