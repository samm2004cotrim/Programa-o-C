#include <stdio.h>

int main() {
    int numeroNormal = 21474833647; // Este valor excede o limite de um int
    long int numeroGrande = 21474833647;

    printf("Valor de numeroNormal (int): %d\n", numeroNormal);
    printf("Valor de numeroGrande (long int): %ld\n", numeroGrande);

    numeroGrande = 3000000000; // Atribuindo um valor maior que o limite de int
    printf("Valor de numeroGrande (long int) após atribuição: %ld\n", numeroGrande);

    return 0;
}
