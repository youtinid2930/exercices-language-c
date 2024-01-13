#include<stdio.h>
// Fonction pour détecter si un mot est un palindrome
int palindrome(const char *mot) {
    const char *debut = mot;
    const char *fin = mot;

    
    while (*fin != '\0') {
        fin++;
    }
    fin--; 
    while (debut < fin) {
        if (*debut != *fin) {
            return 0; 
        }
        debut++;
        fin--;
    }
    return 1;
}
int main() {
    char mot1[] = "RADAR";
    char mot2[] = "ERE";
    char mot3[] = "RTYTY";

    if (palindrome(mot1)) {
        printf("%s est un palindrome.\n", mot1);
    } else {
        printf("%s n'est pas un palindrome.\n", mot1);
    }

    if (palindrome(mot2)) {
        printf("%s est un palindrome.\n", mot2);
    } else {
        printf("%s n'est pas un palindrome.\n", mot2);
    }

    if (palindrome(mot3)) {
        printf("%s est un palindrome.\n", mot3);
    } else {
        printf("%s n'est pas un palindrome.\n", mot3);
    }

    return 0;
}