// Desenvolva uma função chamada minha_strcmp que recebe dois vetores de
// caracteres e compara as strings lexicograficamente. A função deve retornar 0 se as
// strings forem iguais, um número negativo se a primeira string for menor que a
// segunda, e um número positivo se a primeira for maior.
#include <stdio.h>

int minha_strcmp(char string1[100], char string2[100]){
    int i = 0;

    for(i; string1[i] != '\0' && string2[i] != '\0'; i++){
        if(string1[i] != string2[i]){
            return string1[i] - string2[i];
        }
    }

    return string1[i] - string2[i];
}

int main(){
    char palavra1[100];
    char palavra2[100];
    int resultado;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    resultado = minha_strcmp(palavra1, palavra2);

    if(resultado == 0){
        printf("Palavras iguais");
    } else if(resultado < 0) {
        printf("Primeira palavra vem antes no dicionario");
    } else {
        printf("Segunda palavra vem antes no dicionario");
    }

    return 0;
}