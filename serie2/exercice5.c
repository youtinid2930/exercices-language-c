#include <stdio.h>

// Fonction de cryptage d'un caractère
void crypt(char *caractere, int decalage){
    if(*caractere >= 'A' && *caractere <= 'Z'){
        *caractere = ((*caractere - 'A' + decalage) % 26) + 'A';
    }
    else if(*caractere >= 'a' && *caractere <= 'z'){
        *caractere = ((*caractere - 'a' + decalage) % 26) + 'a';
    }
}

int main(){
    char cMessage[] = "z";
    int decalage = 5;
    for(int i = 0; cMessage[i] != '\0'; i++){
        crypt(&cMessage[i], decalage);
    }
    printf("Message crypté : %s\n", cMessage);
    return 0;
}
