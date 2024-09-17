// Busca de Caracteres com strchr e strrchr
// a. Solicite ao usuário que insira uma string e um caractere. Use strchr para
// encontrar a primeira ocorrência do caractere na string e exiba a posição
// encontrada (ou uma mensagem indicando que o caractere não foi
// encontrado).
// b. Repita o processo anterior, mas desta vez usando strrchr para encontrar a
// última ocorrência do caractere na string.

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    char ocorrencia;
    char resultado_inicio;
    char resultado_fim;

    printf("Digite uma palavra: ");
    scanf(" %s", palavra);
    printf("Digite uma letra a ser buscada: ");
    scanf(" %c", &ocorrencia);
    resultado_inicio = strchr(palavra, ocorrencia);
    resultado_fim = strrchr(palavra, ocorrencia);

    if(resultado_inicio != NULL){
        printf("Encontrado em %c na palavra %s\n", ocorrencia, palavra);
    } else {
        printf("Nao foi possivel encontrar o caracter\n");
    }

    if(resultado_fim != NULL){
        printf("Encontrado em %c na palavra %s", ocorrencia, palavra);
    } else {
        printf("Nao foi possivel encontrar o caracter");
    }

    return 0;
}