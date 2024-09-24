#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void embaralhar(char palavra[]) {
    int i, j, temp;
    srand(time(NULL));

    for (i = 0; palavra[i] != '\0'; i++) {
        j = rand() % (i + 1);
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }
}

int contarLetrasCertas(char original[], char tentativa[]) {
    int cont = 0;
    for (int i = 0; original[i] != '\0'; i++) {
        if (original[i] == tentativa[i]) {
            cont++;
        }
    }
    return cont;
}

int main() {
    int maximoCaracteres = 20;
    char palavra[maximoCaracteres], anagrama[maximoCaracteres], tentativa[maximoCaracteres];
    int tentativas = 3;

    printf("Digite uma palavra (ate 20 caracteres): ");
    scanf("%s", palavra);

    strcpy(anagrama, palavra);
    embaralhar(anagrama);

    printf("Anagrama: %s\n", anagrama);

    while (tentativas > 0) {
        printf("Digite sua tentativa: ");
        scanf("%s", tentativa);

        if (strcmp(palavra, tentativa) == 0) {
            printf("Parabens, voce acertou!\n");
            break;
        } else {
            int letrasCertas = contarLetrasCertas(anagrama, tentativa);
            printf("Voce errou. Mas %d letras estao na posicao correta.\n", letrasCertas);
            tentativas--;
        }
    }

    if (tentativas == 0) {
        printf("Suas tentativas acabaram. A palavra era: %s\n", anagrama);
    }

    return 0;
}