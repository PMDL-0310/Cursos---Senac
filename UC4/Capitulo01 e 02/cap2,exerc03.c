#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta >= 0 && a != 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else {
        printf("Não é possível calcular raízes reais para os valores fornecidos.\n");
    }

    return 0;
}
