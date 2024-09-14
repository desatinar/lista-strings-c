// Implemente a função minha_strrchr, que recebe um vetor de caracteres e um
// caractere c e retorna o índice da última ocorrência de c na string ou -1 se c não for
// encontrado.

int minha_strrchr(char string[100], char caracter){
    int i = 100;
    for(i; i > 0; i--){
        if(string[i] == caracter){
            return i;
        }
    }
    return -1;
}

int main(){
    char input[100];
    int output;

    printf("Digite um texto: ");
    scanf("%s", input);
    output = minha_strrchr(input, 'c');
    
    printf("Ultimo indice encontrado: %d", output);

    return 0;
}