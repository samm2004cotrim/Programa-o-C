#include <stdio.h> 

int main() { 
    //variaveis cada uma com um nome diferente
    int idade = 25;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 55.5;
    char letra = 'S';
    char nome[20] = "Samuel";
    //imprimindo as variaveis
    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.3f\n", peso);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);
    return 0;
}
