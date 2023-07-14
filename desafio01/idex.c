/* faça um programa que receba quatro numeros interos e mostre a soma deles */
#include <stdio.h>

int main() {
    int a, b, c, d, res;

    printf("digite o primeiro numero: ");
    scanf("%d", &a);

    printf("digite o segundo numero: ");
    scanf("%d", &b);

    printf("digite o terceiro numero: ");
    scanf("%d", &c);

    printf("digite o quarto numero: ");
    scanf("%d", &d);

    res = a+b+c+d;
    printf("a soma dos numeros e: %d", res);
}