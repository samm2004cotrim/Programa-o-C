#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Drecremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf ("Valor inicial: %d\n", numero1);

    resultado = ++numero1;
    //printf ("Valor após incremento: %d\n", numero1);
    printf ("Após Pré incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    //numero1--;
    //printf ("Valor após decremento: %d\n", numero1);
    resultado = --numero1;
    printf ("Após Pós-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

}
