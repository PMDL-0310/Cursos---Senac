#include <stdio.h>

int main() {
    char c1, c2, c3;

    printf("Digite o primeiro caractere: ");
    scanf(" %c", &c1);

    printf("Digite o segundo caractere: ");
    scanf(" %c", &c2);

    printf("Digite o terceiro caractere: ");
    scanf(" %c", &c3);

    printf("Palavra invertida: %c-%c-%c\n", c3, c2, c1);

    return 0;
}
