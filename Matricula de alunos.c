#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
   
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);

    return 0;
}
