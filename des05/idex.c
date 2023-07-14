#include <stdio.h> 

int main() {
    float valor_i, valor_f, anos, nas, mor, aumento;

    printf("\nqual a quantidade inicial de animais: ");
    scanf("%f", &valor_i);

    printf("qual a quantidade final de animais: ");
    scanf("%f", &valor_f);

    anos=0;
    while (valor_i<valor_f) {

        nas = valor_i/3;
        mor = valor_i/4;
        aumento = nas - mor;
        valor_i+=aumento;
        anos++;
    }

    printf("\nquantidade de animais: %.0f\n", valor_i);
    printf("qunatidade de anos: %.0f", anos);
}