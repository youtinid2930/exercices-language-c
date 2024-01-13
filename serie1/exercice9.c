#include<stdio.h>


int main(){
    int number = 0,i = 0,somme = 0,min = 0,somme_strictpositive = 0,min_strictpositive = 0;
    printf("enter numbers : \n");
    while(number!=100){
        printf("number %d :", i+1);
        scanf("%d",&number);
        if(number == 100){
            break;
        }
        somme = somme + number;
        if(i==0){
            min == number;        
        }
        else if(number<=min){
            min = number;
        }
        if(number>0){
            somme_strictpositive=somme_strictpositive+number;
            if(i==0){
                min_strictpositive = number;
            }
            else if(number<=min_strictpositive){
                min_strictpositive=number;
            }
        }
        i++;
    }
    printf("the total number of entries: %d \n", i);
    printf("the sum of the values ​​read: %d \n", somme);
    printf("the minimum: %d \n", min);
    printf("the sum of the strictly positive values ​​read: %d \n", somme_strictpositive);
    printf("the minimum of the strictly positive values: %d \n", min_strictpositive);
}