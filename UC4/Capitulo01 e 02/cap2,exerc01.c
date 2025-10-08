#include <stdio.h>

int main() {
    float distancia, tempo, velocidade;

    printf("Informe a distância percorrida (em metros): ");
    scanf("%f", &distancia);

    printf("Informe o tempo gasto (em segundos): ");
    scanf("%f", &tempo);

    if (tempo != 0) {
        velocidade = distancia / tempo;
        printf("A velocidade do objeto é: %.2f m/s\n", velocidade);
    } else {
        printf("Erro: o tempo não pode ser zero!\n");
    }

    return 0;
}
