#include <stdio.h>

// Procédure d'initialisation du tableau inb_jours
void initialiser_inb_jours(int inb_jours[13]){
    int i;
    for(i = 1; i <= 12; ++i) {
        if (i == 2)
            inb_jours[i] = 28;
        else if ((i % 2 == 0 && i <= 7) || (i % 2 != 0 && i > 7))
            inb_jours[i] = 30;
        else
            inb_jours[i] = 31;
    }
}
// Procédure d'impression des 12 valeurs utiles de inb_jours
void imprimer_inb_jours(int inb_jours[13]){
    int i;
    printf("Nombre de jours pour chaque mois :\n");
    for(i = 1; i <= 12; ++i) {
        printf("Mois %d : %d jours\n", i, inb_jours[i]);
    }
}
// Procédure d'impression pour un mois donné (variante)
void imprimer_jours_pour_mois(int inb_jours[13],int mois){
    if (mois >= 2 && mois <= 12) {
        printf("Mois %d : %d jours\n", mois, inb_jours[mois]);
    } else {
        printf("Mois invalide.\n");
    }
}
int main(){
    int inb_jours[13],mois;
    initialiser(inb_jours);
    imprimer(inb_jours);
    printf("Entrez un mois (entre 1 et 12) : ");
    scanf("%d", &mois);
    imprimer_imois(inb_jours,mois);

    return 0;
}
