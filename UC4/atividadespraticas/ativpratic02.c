#include <stdio.h>

int main() {
    // Declaração e inicialização da matriz 3x4: 3 lojas, 4 meses
    float vendas[3][4] = {
        {12000.0, 13500.0, 14000.0, 15000.0}, // Loja 1
        {10000.0, 11000.0, 12500.0, 13000.0}, // Loja 2
        {15000.0, 14500.0, 16000.0, 17000.0}  // Loja 3
    };

    float total_lojas[3] = {0};     // Total por loja
    float total_geral = 0;          // Total geral
    float total_mes3 = 0;           // Total do 3º mês (índice 2)

    // Exibindo a tabela de vendas
    printf("Vendas Mensais por Loja (em R$):\n\n");
    printf("           Mês 1     Mês 2     Mês 3     Mês 4\n");

    for (int i = 0; i < 3; i++) {
        printf("Loja %d  ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%8.2f ", vendas[i][j]);

            // Acumulando total por loja e total geral
            total_lojas[i] += vendas[i][j];
            total_geral += vendas[i][j];

            // Somar vendas do 3º mês (índice 2)
            if (j == 2) {
                total_mes3 += vendas[i][j];
            }
        }
        printf("\n");
    }

    // Exibindo totais por loja
    printf("\nTotal de vendas por loja:\n");
    for (int i = 0; i < 3; i++) {
        printf("Loja %d: R$ %.2f\n", i + 1, total_lojas[i]);
    }

    // Exibindo total geral e do mês 3
    printf("\nTotal geral de vendas: R$ %.2f\n", total_geral);
    printf("Total de vendas no 3º mês (todas as lojas): R$ %.2f\n", total_mes3);

    return 0;
}