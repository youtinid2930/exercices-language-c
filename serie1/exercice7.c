#include<stdio.h>

int main(){
    int n,i,count,close;
    printf("a programme that let us enter 20 numbers and give us \n");
    printf("square number and also it let us to enter a serie of \n ");
    printf("numbers, stop when you enter 100 and it give us the \n");
    printf("square number and also the total number of entries \n");
    printf("___________________________________________________________\n");
    printf("                    lets bigin :        \n");
    do{
    // question 1:
    printf("enter 20 number: \n");
    for(i=0;i<20;i++){
        printf("number %d :",i+1);
        scanf("%d",&n);
        if(n%2==0){
            printf("%d", n*n);
        }
    }
    // question 2:
    printf("enter a serie of numbers :\n");
    i=0;
    do{
        printf("number %d :", i+1);
        scanf("%d", &n);
        if(n%2==0){
            printf("%d",n*n);
            count++;
        }
        i++;
    }while(n!=100);
    printf("the total number of entries : %d \n", i+1);
    printf("to continue enter 1 , 0 to quit : ");
    scanf("%d", &close);
    }while(close);

}