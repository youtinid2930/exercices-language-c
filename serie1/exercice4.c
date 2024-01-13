#include<stdio.h>

int main(){
    float prix_initial,prix_final;
    int close;
    printf("a simple programme that give us the price of a product before discount\n");
    printf("entre the price before discount it will give you, the final price and also\n");
    printf("the corresponding discount \n");  
    printf("___________________________________________________________\n");
    printf("                    lets bigin :        \n");
    
    do{
        printf("entre the price before discount: ");
        scanf("%f", &prix_initial);
        if(prix_initial<=0){
            printf("that is not a price");
        }
        else if(prix_initial<100){
            prix_final=prix_initial*0.3;
            printf("the discount is 30%% \n");
            printf("the final price is %2.f DH \n", prix_final);
        }
        else if((prix_initial>=100)&&(prix_initial<200)){
            prix_final=prix_initial*0.4;
            printf("the discount is 40%% \n");
            printf("the final price is %2.f DH \n", prix_final);
        }
        else{
            prix_final=prix_initial*0.5;
            printf("the discount is 50%%\n");
            printf("the final price is %2.f DH \n", prix_final);
        }
        printf("to continue enter 1 , 0 to quit : ");
        scanf("%d", &close);
    }while(close);
}