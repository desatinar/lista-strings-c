// Escreva uma função chamada minha_strncat que recebe dois vetores de caracteres:
// primeira e segunda, e um número n. A função deve concatenar até n caracteres da
// segunda string ao final da primeira. Suponha que primeira tem espaço suficiente
// para armazenar o resultado.

#include <stdio.h>

void minha_strncat(char primeira[100], char segunda[100], int n){

}

int main(){
    char palavra1[100];
    char palavra2[100];
    int ponto_parada;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    printf("Digite a quantidade de caracteres a serem concatenados: ");
    scanf("%d", &ponto_parada);

    minha_strncat(palavra1, palavra2, ponto_parada);

    return 0;
}