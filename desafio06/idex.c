/*  nota        peso       media       conceito

    trabalho    2          10 - 08     A
    exame       3          08 - 07     B
    avaliaçao   5          07 - 06     C
    -------------          06 - 05     D
    faça um programa que   05 - 00     E
    receba as tres notas           
    e mostre a media
 */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, med;

    printf("\ndigite a nota do trabalho: ");
    scanf("%f", &nota1);

    printf("digite a nota do exame: ");
    scanf("%f", &nota2);

    printf("digite a nota da avaliacao: ");
    scanf("%f", &nota3);

    med = (nota1*2 + nota2*3 + nota3*5)/10;

    printf("\na sua media e: %.2f\n", med);

    if (med>=10 || med<=8) {

        printf("sua nota foi B");
    } else if (med>8 || med<=7) {
        printf("sua nota foi A");

    }else if (med>7 || med<=6) {
        printf("sua nota foi C");

    } else if (med>6 || med<=5) {
        printf("sua nota foi D");

    } else if (med>5) {
        printf("sua nota foi E");

    }
}