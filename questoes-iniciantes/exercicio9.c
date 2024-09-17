// Implemente uma função minha_strtok que recebe um vetor de caracteres e um
// caractere delimitador. A função deve dividir o vetor original em substrings (tokens)
// usando o delimitador e imprimir cada substring separadamente.
#include <stdio.h>

void minha_strtok(char texto[100], char delimitador) {
    int i = 0, j = 0;
    int token_inicio = 0;

    while (texto[i] != '\0') {
        if (texto[i] == delimitador) {
            for (j = token_inicio; j < i; j++) {
                printf("%c", texto[j]);
            }
            printf("\n");
            token_inicio = i + 1;
        }
        i++;
    }

    if (token_inicio < i) {
        for (int j = token_inicio; j < i; j++) {
            printf("%c", texto[j]);
        }
        printf("\n");
    }
}

int main() {
    char texto[100];
    char delimitador;

    printf("Digite o texto: ");
    scanf("%s", texto);
    printf("Digite o delimitador: ");
    scanf(" %c", &delimitador);
    
    printf("Tokens obtidos '%c':\n", delimitador);
    minha_strtok(texto, delimitador);

    return 0;
}