#include <stdio.h>

int main(void){

    float x, y, soma, sub, div, mut, med;

    printf("informe um numero: ");
    scanf("%f", &x);

    printf("informe outro numero: ");
    scanf("%f", &y);

    soma = x + y;

    sub = x - y;

    mut = x * y;

    div = x / y;

    med = soma / 2;

    printf("a soma dois numeros e: %.2f\n", soma);
    printf("a subtracao dos numeros e: %.2f\n", sub);
    printf("a mutiplicacao dos numeros e: %.2f\n", mut);
    printf("a divisao dos numeros e: %.2f\n", div);
    printf("a media entre os numeros e: %.2f\n", med);
}