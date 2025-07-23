#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float resultado;
    //Solicitando as notas do aluno
    printf("Calculadora de notas\n");
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    resultado = (nota1 + nota2 + nota3) / 3;
    printf("Média: %.1f\n", resultado);

    return 0;
}
