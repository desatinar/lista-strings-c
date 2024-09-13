// Escreva uma função chamada minha_strlen que recebe uma string (um vetor de
// caracteres terminado em '\0') e retorna o comprimento da string, excluindo o
// caractere nulo \0.
#include <stdio.h>

void minha_strlen(char string[100]){
    int i = 0;
    
    for(i; i < 100; i++){
        if(string[i] == '\0'){
            printf("Quantidade de caracteres: %d", i);
            return;
        }
    }
}

int main(){
    char input[100];

    printf("Digite uma palavra: ");
    scanf("%s", input);
    minha_strlen(input);

    return 0;
}