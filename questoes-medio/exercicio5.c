// Manipulação de Substrings com strstr e Tokenização com strtok
// a. Solicite ao usuário que insira uma string e uma substring. Use strstr para
// procurar pela primeira ocorrência da substring na string principal e informe a
// posição ou indique que não foi encontrada.
// b. Peça ao usuário que insira uma string e um conjunto de caracteres
// delimitadores (por exemplo, vírgula, espaço, etc.). Use strtok para dividir a
// string em substrings com base nos delimitadores fornecidos e exiba cada
// token encontrado.

#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    char sub_texto[100];
    char *resultado;
    int posicao;

    char texto2[100];
    char delimitador[100];
    char *token;

    printf("Digite um texto: ");
    scanf(" %s", texto);
    printf("Digite um subtexto: ");
    scanf(" %s", sub_texto);
    resultado = strstr(texto, sub_texto);

    if(resultado){
        posicao = resultado - texto;
        printf("Encontrado %d\n", posicao);
    } else {
        printf("Subtexto não encontrado");
    }

    printf("Digite um texto: ");
    scanf(" %s", texto2);
    printf("Digite um texto delimitador: ");
    scanf(" %s", delimitador);
    token = strtok(texto2, delimitador);

    while(token != NULL){
        printf("Token: %s\n", token);
        token = strtok(NULL, delimitador);
    }

    return 0;
}