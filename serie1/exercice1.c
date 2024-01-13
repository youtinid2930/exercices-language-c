#include<stdio.h>

int main(){
    int close;
    float nb1,nb2,resultat;
    char operation;
    printf("a simple calculator for the principale operation (+,-,*,/) \n");
    printf("entre two numbers and symbole of operation (+,-,*,/) and it\n");
    printf("will give you the answer\n");
    printf("___________________________________________________________\n");
    printf("                    lets bigin :        \n");
    do{
    printf("enter the first nomber: ");
    scanf("%f", &nb1);
    printf("enter the seconde nomber: ");
    scanf("%f", &nb2);
    printf("enter the operation: ");
    scanf(" %c", &operation);
    switch(operation){
        case '+': resultat=nb1+nb2;
                  printf("%f + %f = %f \n",nb1,nb2,resultat);
                  break;
        case '*': resultat=nb1*nb2;
                  printf("%f * %f = %f \n",nb1,nb2,resultat);
                  break;
        case '-': resultat=nb1-nb2;
                  printf("%f - %f = %f \n", nb1,nb2,resultat);
                  break;
        case '/': if(nb2==0){
                    printf("can not divise by 0 \n");
                  }else{
                    resultat=nb1/nb2;
                    printf("%f / %f = ",nb1,nb2);
                    printf("%f \n",resultat);
                  }
                  break;
        default: printf("syntaxe eror, try to enter a valide operation \n");
                 break;  
            }
    printf("to continue enter 1 , 0 to quit : ");
    scanf("%d", &close);
    }while(close);
}  