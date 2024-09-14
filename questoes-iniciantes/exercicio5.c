// Escreva uma função chamada minha_strchr que recebe um vetor de caracteres e
// um caractere c. A função deve retornar o índice da primeira ocorrência de c na string
// ou -1 se c não for encontrado.
#include <stdio.h>

int minha_strchr(char string[100], char caracter){
    int i = 0;

    for(i; string[i] != '\0'; i++){
        if(string[i] == caracter){
            return i;
        }
    }
    return -1;
}

int main(){
    char input[100];
    int output;

    printf("Digite um texto: ");
    scanf("%s", input);
    output = minha_strchr(input, 'c');
    
    printf("Primeira ocorrencia no indice: %d", output);

    return 0;
}