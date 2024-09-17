// Concatenação de Strings com strcat e strncat
// a. Solicite ao usuário que insira duas strings. Use strcat para concatenar a
// segunda string ao final da primeira e exiba o resultado.
// b. Peça ao usuário um número n e utilize strncat para concatenar até n
// caracteres da segunda string ao final da primeira. Exiba a string resultante.

#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[100];
    char palavra2[100];
    int ponto_parada;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    strcat(palavra1, palavra2);
    printf("%s\n", palavra1);

    printf("Digite um numero: ");
    scanf("%d", &ponto_parada);
    strncat(palavra2, palavra1, ponto_parada);
    printf("%s", palavra2);

    return 0;
}