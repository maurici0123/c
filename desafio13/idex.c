/* faca um vetor de 5 elementos e indentifique e motre as posicoes dos numeros primos */

#include <stdio.h>

int main() {
    int vet [5], res [5],c, cont, x, pos [5] = {0,1,2,3,4};

    for (c=0; c<5; c++) {

        printf("digite um numero: ");
        scanf("%d", &vet[c]);

        cont=0;

        for (x=1; x <=vet[c]; x++ ) {
            if (vet[c] % x ==  0) {
                cont++;
            }
        }
        if (cont == 2) {
            res[c] = 1;
        } else {
            res[c] = 0;
        }
    }

    for (c=0; c<5; c++) {
        if (res[c] == 1) {
            printf("\no numero %d na posicao %d e primo", vet[c], pos[c]);
        }
    }
}
