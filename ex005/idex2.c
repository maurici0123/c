#include <stdio.h>

int main() {

    float vet[4];
    float res=0;
    int c;
   
    for (c=0; c<4; c++) {

        printf("digite um numero: ");
        scanf("%f", &vet[c]);
    }

    for (c=0; c<4; c++) {
        res += vet[c];
    }

    printf("\n");
    printf("a media dos numeros e: %.3f", res/4);
}