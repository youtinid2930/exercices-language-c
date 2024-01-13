#include <stdio.h>

int main() {
    int i,j,k;
    printf("question a : \n");
    for(i = 6; i >= 1; i--) {
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("question b:\n");
    for(int i = 0; i < 10; i++) {
        printf("0");
    }
    printf("\n");
    for (i = 1; i <= 9; i++) {
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        for(k = 0; k <= 9 - i; k++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
