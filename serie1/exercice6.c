#include<stdio.h>

int main(){
    int i,n,p,close;
    printf("a programme that let us to enter a number , if it is even give us \n");
    printf("all even number less than the number entred without 0\n");
    printf("___________________________________________________________\n");
    printf("                    lets bigin :        \n");
    do{
        
        printf("enter a number : ");
        scanf("%d", &n);
        if(n==0){
            printf("try entering a number other than zero \n");
        }
        else if(n%2==0){
            if(n>0){
                for(i=1;i<n/2;i++){
                    p=n-2*i;
                    printf("%d \n",p);
                }
            }else{
                for(i=0;i>n/2;i++){
                    p=n+2*i;
                    printf("%d \n",p);
                }
            }
        }
        else{
            printf("try to enter an integer or a even number");
        }
        printf("to continue enter 1 , 0 to quit : ");
        scanf("%d", &close);
    }while(close);
}