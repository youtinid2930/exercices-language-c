#include<stdio.h>

// fonction pour saiser le tableau 
void saiser(int tab[20]){
    int i;
    printf("saiser 20 nombres entiers : ");
    for (i=0;i<20;i++){
        printf("nombre %d : ", i+1);
        scanf("%d",&tab[i]);
    }
}
// fonction pour afficher le tableau
void afficher(int tab[20]){
    int i;
    printf("voici les nombres que tu as saiser : \n");
    for(i=0;i<20;i++){
        printf("%d ,", tab[i]);
    }
    printf("\n");
}
// fonction pour afficher le moyenne
int moyenne(int tab[20]){
    int i,moy,somme=0;
    for(i=0;i<20;i++){
        somme = somme + tab[i];
    }
    moy = somme/20;
    return moy;
}
// fonction pour trouver le max de tableau 
int max_element(int tab[20]){
    int max,i;
    max = tab[0];
    for(i=1;i<20;i++){
        if(tab[i]>max){
            max = tab[i];
        }
    }
    return max;
}
// fonction pour supprimer le max
void supprimer_max(int tab[20],int max){
    int i,j,count=0;
    for (i=0;i<20;i++){
        if(tab[i]==max){
            count++;
            for(j=i;i<20;i++){
                tab[j] = tab[j+1];
            }
        }
    }
    for(i=19;i>19-count;i--){
        tab[i]=0;
    }
}
// fonction pour trouver le min
int min_element(int tab[20]){
    int min,i;
    min = tab[0];
    for(i=1;i<20;i++){
        if(tab[i]<min){
            min = tab[i];
        }
    }
    return min;
}
// fonction pour supprimer le min
void supprimer_min(int tab[20],int min){
    int i,j,count=0;
    for (i=0;i<20;i++){
        if(tab[i]==min){
            count++;
            for(j=i;i<20;i++){
                tab[j] = tab[j+1];
            }
        }
    }
    for(i=19;i>19-count;i--){
        tab[i]=0;
    }
}
// ajouter dans un position donner:
void ajouter_pos (int tab[20], int pos, int val){
    int i;
    tab[pos] = val;
}

int main(){
    int tab[20],stop=1,max,min,moy;
    char choix;
    while(stop){
        printf("____________________________________________\n");
        printf("A - Saisie et affichage \n");
        printf("B - moyenne \n");
        printf("C - suppression de max et affichage \n");
        printf("D - suppression de min et affichage \n");
        printf("E - ajoute d'un entier a un position donnee \n");
        printf("Q - quitter \n");
        printf("____________________________________________\n");
        printf("saiser la lettre correspandante a votre choix : (majscule)");
        scanf(" %c", &choix);
        switch (choix)
        {
        case 'A':
            saiser(tab);
            afficher(tab);
            break;
        case 'B':
            moy = moyenne(tab);
            printf("la moyenne est : %d \n",moy);
            break;
        case 'C':
            max = max_element(tab);
            supprimer_max(tab,max);
            afficher(tab);
            break;
        case 'D':
            min = min_element(tab);
            supprimer_min(tab,min);
            afficher(tab);
            break;
        case 'Q':
            choix = 0;
            break;
        default:
            printf("saiser un autre lettre (majuscule et dans la liste) \n");
            break;
        }

    }
}