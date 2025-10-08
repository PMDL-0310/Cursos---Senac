#include <stdio.h>

int main() {
    float valorCompra, valorTotal;
    int tipoProduto;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o tipo do produto internacional (0 para tipo com taxa de 10%%, outro numero para 20%%): ");
    scanf("%d", &tipoProduto);

    if (tipoProduto == 0) {
        valorTotal = valorCompra + (valorCompra * 0.10);
    } else {
        valorTotal = valorCompra + (valorCompra * 0.20);
    }

    printf("O valor total a ser pago e: %.2f\n", valorTotal);

    return 0;
}