#include <stdio.h>

int main() {
    printf ("Tamanho de int: %u bytes\n", sizeof(int));
    printf ("Tamanho de unsigned int: %u bytes\n", sizeof(long int));
    printf ("Tamanho de long int: %u bytes\n", sizeof(long long int));
    printf ("Tamanho de long int: %u bytes\n", sizeof(double));
    printf ("Tamanho de float: %u bytes\n", sizeof(long double));

    return 0;
}
