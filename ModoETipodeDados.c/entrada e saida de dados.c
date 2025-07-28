#include <stdio.h> 

int main() { 
    int idade;
    float altura;
    char opcao;
    char nome[20];
    //sintaxe de entrada e saída de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A sua idade é: %d\n", idade);
    printf("Digite sua altura:");
    scanf("%f", &altura);
    printf("A sua altura é: %f\n", altura);
    printf("Digite seu nome:");
    scanf(" %s", nome);
    printf("Seu nome é: %s", &nome);
}
