#include <stdio.h>

#define PI 3.14

int main(){

    int opcao;
    printf("Digite 1 para circulo, ou Digite 2 para retangulo: \n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1: {
        float raio, area;
        printf("============= Calculo do circulo ============== \n\n");
        printf("Digite o raio do circulo: \n");
        scanf("%f", &raio);
        area = PI * raio * raio;
        printf("A area do circulo e: %.2f\n", area);
        break;
    }
    case 2: {
        float base, altura, area;
        printf("============= Calculo do retangulo ============== \n\n");
        printf("Digite a base do retangulo: \n");
        scanf("%f", &base);
        printf("Digite a altura do retangulo: \n");
        scanf("%f", &altura);
        area = base * altura;
        printf("A area do retangulo e: %.2f\n", area);
        break;
    }
    default:
        printf("Opcao invalida. Por favor, digite 1 para circulo ou 2 para retangulo.\n");
        break;
    }

    return 0;
}