#include <stdio.h>

int main() {
    int numero = 4, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d",resultado);
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    }
}
