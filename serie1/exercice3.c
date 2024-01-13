#include<stdio.h>

int main(){
    int nbphotocopy, close;
    float price;
    printf("a simple programme give us the price of a number of photocopy \n");
    printf("give it the number, it will give you the price \n");
    printf("___________________________________________________________\n");
    printf("                    lets bigin :        \n");
    do{
    printf("enter the number of photocopy : ");
    scanf("%d", &nbphotocopy);
    if(nbphotocopy<=10){
        printf("the price is : %d DH \n", nbphotocopy);
    }else if(nbphotocopy<=30){
        price=10+(nbphotocopy-10)*0.6;
        printf("the price is : %.2f DH \n", price);
    }else{
        price=10+20*0.6+(nbphotocopy-30)*0.4;
        printf("the price is %.2f DH\n", price);
    }
    printf("to continue enter 1 , 0 to quit :");
    scanf("%d", &close);
    }while(close);
}