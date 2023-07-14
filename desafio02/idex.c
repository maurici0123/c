/* faça umprograma que recebe um salario e um porcentual e mostre o aumento e o novo salario */

#include <stdio.h>

int main() {
    float sal_i, sal_f, por, aum;

    printf("\ndigite o salario: ");
    scanf("%f", &sal_i);

    printf("qual o percentual do aumento: ");
    scanf("%f", &por);

    aum = (por*sal_i)/100;

    sal_f = aum+sal_i;

    printf("\no aumento do salario e de : %.2f\n", aum);
    printf("o novo salario e de : %.2f\n\n", sal_f);
}