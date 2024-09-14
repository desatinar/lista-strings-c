// Crie uma função chamada minha_strcat que recebe dois vetores de caracteres:
// primeira e segunda. A função deve concatenar a segunda string ao final da primeira.
// Suponha que o vetor primeira possui espaço suficiente para armazenar o resultado.
#include <stdio.h>

void minha_strcat(char primeira[100], char segunda[100]){
    int i = 0;
    int j = 0;

    for(i; primeira[i] != '\0'; i++){
    }
    for(j; segunda[j] != '\0'; j++){
        primeira[i++] = segunda[j];
    }

    printf("%s", primeira);
}

int main(){
    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    minha_strcat(palavra1, palavra2);
    
    return 0;
}