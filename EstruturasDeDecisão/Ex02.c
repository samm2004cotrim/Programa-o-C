#include <stdio.h>

int main() {
    /* Se a 'idade' for 18 ou mais, o programa imprime 'Você é maior de idade.
    No nosso exemplo, 20 é maior que 18, então a mensagem será ixibida*/

    int idade = 20;
    if (idade >= 18){
        printf("Você é maior de idade.\n");
        printf("Dentro IF\n");
        }
        printf("Fora IF\n");
    return 0;
}
