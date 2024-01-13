#include <stdio.h>

int main() {
    float T[3][4];
    int i,j;
    float somme = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            T[i][j] = i * 4 + j + 1; 
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            somme += T[i][j];
        }
    }
    printf("La somme des elements du tableau est : %f\n", somme);
    return 0;
}
