// Manipulação Básica de Strings com strlen e strcpy
// a. Solicite ao usuário que insira uma string. Em seguida, use a função strlen
// para calcular e imprimir o comprimento da string fornecida.
// b. Peça ao usuário uma segunda string. Use strcpy para copiar a primeira string
// para uma nova variável e exiba ambas as strings no console para
// comparação.
#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    char copia_palavra[200];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Comprimento da palavra: %d\n", strlen(palavra));

    printf("Digite uma segunda palavra: ");
    strcpy(copia_palavra, palavra);
    scanf("%s", palavra);
    printf("Palavras digitadas: %s, %s", copia_palavra, palavra);

    return 0;
}