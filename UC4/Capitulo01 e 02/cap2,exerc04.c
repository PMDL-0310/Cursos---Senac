#include <stdio.h>

int main() {
    int a = 1;
    int b = 3;
    int temp;

    // Antes da troca
    printf("Antes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Troca de valores usando variável auxiliar
    temp = a;
    a = b;
    b = temp;

    // Depois da troca
    printf("Depois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
