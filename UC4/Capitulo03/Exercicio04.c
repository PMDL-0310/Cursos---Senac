#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro de 1 a 4: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Voce escolheu o numero 1 - Comeco de tudo!\n");
            break;
        case 2:
            printf("Voce escolheu o numero 2 - Par e equilibrado!\n");
            break;
        case 3:
            printf("Voce escolheu o numero 3 - Criativo e dinâmico!\n");
            break;
        case 4:
            printf("Voce escolheu o numero 4 - Estavel e confiavel!\n");
            break;
        default:
            printf("Numero invalido. Por favor, digite um numero entre 1 e 4.\n");
            break;
    }

    return 0;
}