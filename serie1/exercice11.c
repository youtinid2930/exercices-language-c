#include<stdio.h>


int main(){
    int n = 0,choix,stop=1;
    while(stop){
    printf("saisez un nombre entier: ");
    scanf("%d",&n);
    printf("le nombre est : %d \n", n);
    printf("1- ajouter 2 \n");
    printf("2- multiplier par 3 \n");
    printf("3- soustraire 5 \n");
    printf("4- quiter \n");
    printf("choiser un choix entre 1 et 4 : ");
    scanf("%d", &choix);
    if(choix == 4){
        stop = 0;
    }
    switch(choix)
    {
    case 1:
        printf("%d + 2 = %d \n",n,n+2);
        break;
    case 2:
        printf("%d x 3 = %d\n",n,n*3);
        break;
    case 3:
        printf("%d - 5 = %d\n",n,n-5);
        break;
    case 4:
        stop = 0;
    default:
        printf("veillez entrer un autre choix \n");
        break;
    }
    }
}