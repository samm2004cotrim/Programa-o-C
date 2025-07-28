#include <stdio.h>

int main() {
    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    int numero1, numero2, resultado;

    resultado = 10; // Atribuição simples
    printf("Resultado inicial: %d\n", resultado);

    resultado += 20; // Atribuição com soma (equivalente a resultado = resultado + 20)
    printf("Resultado: %d\n", resultado);

    resultado -= numero1; // Atribuição com subtração - PROBLEMA AQUI: numero1 não foi inicializado!
    printf("Resultado: %d\n", resultado);

    resultado *= 5; // Atribuição com multiplicação (equivalente a resultado = resultado * 5)
    printf("Resultado: %d\n", resultado);

    resultado /= 2; // Atribuição com divisão (equivalente a resultado = resultado / 2)
    printf("Resultado: %d\n", resultado);
    
    return 0;
}
