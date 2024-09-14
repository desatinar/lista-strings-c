// Implemente uma função chamada minha_strcpy que recebe dois vetores de
// caracteres: origem e destino. A função deve copiar o conteúdo de origem para
// destino. Suponha que destino é grande o suficiente para receber a cópia de origem.
#include <stdio.h>

void minha_strcpy(char origem[100], char destino[100]){
    int i = 0;

    for(i; origem[i] != '\0'; i++){
        destino[i] = origem[i];
    }

    printf("Palavra '%s' copiada com sucesso", destino);
}

int main(){
    char input[100];
    char copia_input[100];
    
    printf("Digite uma palavra a ser copiada: ");
    scanf("%s", input);
    minha_strcpy(input, copia_input);

    return 0;
}