#include<stdio.h>

typedef struct {
    double partieReelle;
    double partieImaginaire;
} Complex;

// Fonction pour obtenir la partie imaginaire (passage par valeur)
double imag(Complex z) {
    return z.partieImaginaire;
}

// Fonction pour obtenir la partie réelle (passage par valeur)
double real(Complex z) {
    return z.partieReelle;
}

// Fonction pour multiplier deux nombres complexes (passage par valeur)
Complex mul(Complex z1, Complex z2) {
    Complex resultat;
    resultat.partieReelle = z1.partieReelle * z2.partieReelle - z1.partieImaginaire * z2.partieImaginaire;
    resultat.partieImaginaire = z1.partieReelle * z2.partieImaginaire + z1.partieImaginaire * z2.partieReelle;
    return resultat;
}

// Fonction pour obtenir la partie réelle (passage par adresse)
void realParAdresse(Complex *z, double *resultat) {
    *resultat = z->partieReelle;
}

// Fonction pour multiplier deux nombres complexes (passage par adresse)
void mulParAdresse(Complex *z1, Complex *z2, Complex *resultat) {
    resultat->partieReelle = z1->partieReelle * z2->partieReelle - z1->partieImaginaire * z2->partieImaginaire;
    resultat->partieImaginaire = z1->partieReelle * z2->partieImaginaire + z1->partieImaginaire * z2->partieReelle;
}