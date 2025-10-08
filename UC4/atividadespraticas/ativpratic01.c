#include <stdio.h> // Biblioteca para entrada/saída

int main() {
    // Array com 7 pontuações de satisfação
    int pontuacoes_clientes[7];
    
    // Atribuição de valores fictícios (entre 0 e 100)
    pontuacoes_clientes[0] = 90;
    pontuacoes_clientes[1] = 75;
    pontuacoes_clientes[2] = 100;
    pontuacoes_clientes[3] = 85;
    pontuacoes_clientes[4] = 60;
    pontuacoes_clientes[5] = 95;
    pontuacoes_clientes[6] = 80;

    int soma_pontuacoes = 0;
    int maior = pontuacoes_clientes[0];
    int menor = pontuacoes_clientes[0];

    printf("Pontuacoes dos Clientes:\n");

    // Loop para imprimir, somar e encontrar maior/menor
    for (int i = 0; i < 7; i++) {
        printf("Cliente %d (indice %d): %d\n", i + 1, i, pontuacoes_clientes[i]);
        soma_pontuacoes += pontuacoes_clientes[i];

        if (pontuacoes_clientes[i] > maior) {
            maior = pontuacoes_clientes[i];
        }
        if (pontuacoes_clientes[i] < menor) {
            menor = pontuacoes_clientes[i];
        }
    }

    // Cálculo da média
    double media_pontuacoes = (double)soma_pontuacoes / 7;

    // Exibição dos resultados
    printf("\nMedia de pontuacoes: %.2f\n", media_pontuacoes);
    printf("Maior pontuacao: %d\n", maior);
    printf("Menor pontuacao: %d\n", menor);

    return 0;
}