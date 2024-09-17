// Comparação de Strings com strcmp e strncmp
// a. Solicite ao usuário duas strings e utilize strcmp para compará-las. Informe ao
// usuário se as strings são iguais, se a primeira é menor ou maior que a
// segunda.
// b. Peça ao usuário para definir um número n. Use strncmp para comparar as
// strings até os primeiros n caracteres e exiba o resultado da comparação.

#include <stdio.h>
#include <string.h>

int main(){
    char string1[100];
    char string2[100];
    int comparacao;
    int n;

    printf("Digite a primeira palavra: ");
    scanf(" %s", string1);
    printf("Digite a segunda palavra: ");
    scanf(" %s", string2);
    
    comparacao = strcmp(string1, string2);
    if(comparacao == 0){
        printf("Palavras '%s' e '%s' sao iguais\n", string1, string2);
    } else if(comparacao >= 0){
        printf("Palavra '%s' vem antes da palavra '%s'\n", string1, string2);
    } else {
        printf("Palavras '%s' vem antes da palavra '%s'\n", string1, string2);
    }

    printf("Digite um numero de comparacao: ");
    scanf("%d", &n);

    comparacao = strncmp(string1, string2, n);
    if(comparacao == 0){
        printf("Os '%d' caracteras das palavras '%s' e '%s' sao iguais\n", n, string1, string2);
    } else if(comparacao >= 0){
        printf("Os '%d' caracteras das palavras '%s' vem antes da palavra '%s'\n", n, string1, string2);
    } else {
        printf("Os '%d' caracteras das palavras '%s' vem antes da palavra '%s'\n", n, string1, string2);
    }

    return 0;
}