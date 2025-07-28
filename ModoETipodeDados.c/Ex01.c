#include <stdio.h>

int main() {
    int numeroSinal = 3000000000; // Este valor excede o limite de um int
    unsigned int numeroSemSinal = 3000000000;

    printf("Valor de numeroSinal: %d\n", numeroSinal);
    printf("Valor de numeroSemSinal: %u\n", numeroSemSinal);

    return 0;
}
