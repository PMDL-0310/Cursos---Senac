#include <stdio.h>

int main() {
    float valor, soma = 0;

    printf("Digite os valores das compras (digite 0 para finalizar):\n");

    do {
        printf("Valor da compra: R$ ");
        scanf("%f", &valor);

        if (valor < 0) {
            printf("Valor inválido. Digite um valor não negativo.\n");
            continue;
        }

        soma += valor;

    } while (valor != 0);

    printf("\nSoma total das compras: R$ %.2f\n", soma);

    return 0;
}
