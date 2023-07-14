/* reçeba dois numeros e fale qual e maior, e se os dois forem igual informe */

#include <stdio.h>

int main() {
    int a, b;

    printf("\ndigite um numero: ");
    scanf("%d", &a);

    printf("digite outro numero: ");
    scanf("%d", &b);

    if (a>b) {
        printf("\no numero %d e maior", a);
    } else if (b>a) {
    printf("\no numero %d e maior", b);
    } else {
        printf("\nos dois numeros sao iguais");
    }
}