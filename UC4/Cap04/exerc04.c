#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro de 1 a 10: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 10) {
        printf("Número inválido. Por favor, digite um número entre 1 e 10.\n");
        return 1;
    }

    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
