#include <stdio.h>

int main() {
    float troco, qta_troco, tro25, tro10, tro5, tro1;
    tro25=0;
    tro10=0;
    tro5=0;
    tro1=0;

    printf("\nqual o valor do troco: ");
    scanf("%f", &troco);

    while (troco >=0.25) {
        troco = troco-0.25;
        tro25++;
    }

    while (troco >=0.10) {
        troco = troco-0.10;
        tro10++;
    }

    while (troco >=0.05) {
        troco = troco-0.05;
        tro5++;
    }

    while (troco >=0.01) {
        troco = troco-0.01;
        tro1++;
    }

    qta_troco = tro25 + tro10 + tro5 + tro1;

    printf("\no troco vai ser com %.0f moedas", qta_troco);
    printf("\ndetalhes:");
    printf("moedas de 25: %.0f\n", tro25);
    printf("moedas de 10: %.0f\n", tro10);
    printf("moedas de 5: %.0f\n", tro5);
    printf("moedas de 1: %.0f\n", tro1);

}

