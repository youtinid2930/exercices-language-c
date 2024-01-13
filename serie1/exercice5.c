#include<stdio.h>

int main(){
    int n,close,i,prime;
    
    printf("a programme that tell us if a natural is prime numbre \n");
    printf("or not \n");
    printf("___________________________________________________________\n");
    printf("                    lets bigin :        \n");
    do{
        prime = 1;
        printf("enter a natural number: ");
        scanf("%d", &n);
        if(n<0){
            printf("try to enter a postive number \n");
        }
        else if(n == 0){
            printf("0 is neutral \n");
        }
        else if(n == 1){
            printf("1 is not a prime number \n");
        }
        else{
            for(i=2;i<n;i++){
                if(n % i == 0){
                    prime = 0;
                    break;
                }
            }
        }
        if(prime == 1){
            printf("%d is prime number\n", n);
        }
        else{
            printf("%d is not prime number\n", n);
        }
        
        printf("to continue enter 1 , 0 to quit : ");
        scanf("%d", &close);
    }while(close);
}