#include <stdio.h>

int main(){
    float nota;

    printf("digite sua nota: ");
    scanf("%f", &nota);

    if (nota > 7) {
        printf("aprovado(a)");
    } else if (nota > 4) {
        printf("recuperacao");
    } else {
        printf("reprovado(a)");
    }
}