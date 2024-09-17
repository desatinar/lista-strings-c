// Desenvolva uma função minha_strstr que recebe dois vetores de caracteres: texto e
// subtexto. A função deve retornar o índice da primeira ocorrência de subtexto em
// texto ou -1 se subtexto não for encontrado.
#include <stdio.h>

int minha_strlen(char string[100]){
    int i = 0;
    
    for(i; string[i] != '\0'; i++);
    
    return i;
}

int minha_strstr(char texto[100], char subtexto[100]) {
    int i, j;
    int tamanho_texto = minha_strlen(texto);
    int tamanho_subtexto = minha_strlen(subtexto);

    if (tamanho_subtexto > tamanho_texto) {
        return -1;
    }

    for (i = 0; i <= tamanho_texto - tamanho_subtexto; i++) {
        for (j = 0; j < tamanho_subtexto; j++) {
            if (texto[i + j] != subtexto[j]) {
                break;
            }
        }

        if (j == tamanho_subtexto) {
            return i;
        }
    }
    return -1;
}

int main(){
    char texto[100];
    char subtexto[100];
    int indice;

    printf("Digite um texto: ");
    scanf("%s", texto);
    printf("Digite um subtexto: ");
    scanf("%s", subtexto);
    indice = minha_strstr(texto, subtexto);

    if(indice != -1){
        printf("Posicao do subtexto: %d", indice);
    } else {
        printf("Subtexto nao encontrado");
    }

    return 0;
}