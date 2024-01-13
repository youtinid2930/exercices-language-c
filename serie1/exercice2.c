#include<stdio.h>

int main(){
    int age,close;
    char gender;
    printf("a simple programme that tell you if the resident of a city \n");
    printf("taxable or no , according of his or her age and gender\n");
    printf("___________________________________________________________\n");
    printf("                    lets bigin :        \n");
    do{
    printf("enter the age of the resident: ");
    scanf("%d", &age);
    printf("enter the gender of the the resident \n f : feminin \n m male \n >> ");
    scanf(" %c", &gender);
    if(((gender=='m')&&(age>=20))||((gender=='f')&&((age<=35)&&(age>=18)))){
        printf("the resident is taxable \n");
    }
    else{
        printf("the resident is not taxable \n"); 
    }
    printf("to continue enter 1 , 0 to quit :");
    scanf("%d", &close);
    }while(close);  
}