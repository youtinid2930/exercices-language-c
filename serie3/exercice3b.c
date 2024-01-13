#include <stdio.h>

int main() {
    float T[3][4];
    int i,j;
    float somme = 0,*ptr;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            T[i][j] = i;
        }
    }
    ptr = &T[0][0];
    for (i = 0; i < 3 * 4; i++) {
        somme += *ptr; 
        ptr++;         
    }
    printf("La somme des elements du tableau est : %f\n", somme);
    return 0;
}
