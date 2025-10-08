#include <stdio.h>

int main() {
    int numero;

    printf("Digite números inteiros (digite um número negativo para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Número negativo digitado. Encerrando o programa.\n");
            break;
        }
    }

    return 0;
}