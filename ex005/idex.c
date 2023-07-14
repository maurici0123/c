#include <stdio.h>

int main() {

    double vet[5];
    double s=0;

    vet[0] = 10;
    vet[1] = 25;
    vet[2] = 67;
    vet[3] = 34;
    vet[4] = 8;

    s = vet[0] + vet[1] + vet[2] + vet[3] + vet[4] ;

    printf("a media dos numeros e: %.2f", s/5);
}