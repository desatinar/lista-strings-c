// Crie uma função chamada minha_strncpy que recebe dois vetores de caracteres,
// origem e destino, e um número n. A função deve copiar os primeiros n caracteres de
// origem para destino. Suponha que destino tem espaço suficiente para armazenar os
// n caracteres.
#include <stdio.h>

void minha_strncpy(char origem[100], char destino[100], int ponto_parada){
    int i = 0;

    for(i; i < ponto_parada; i++){
        destino[i] = origem[i];
    }
    printf("Palavra cortada: %s", destino);
}

int main(){
    char input[100];
    char copia[100];
    int qtd_caracteres;

    printf("Digite uma palavra: ");
    scanf("%s", input);
    printf("Digite quantos caracteres deseja copiar: ");
    scanf("%d", &qtd_caracteres);
    minha_strncpy(input, copia, qtd_caracteres);

    return 0;
}