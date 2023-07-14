/* recebeba o tempo do cronometro em segundos e mostre quantas horas, minutos e segundos se passaram */

#include <stdio.h>

int main() {
    int temp_i, aux;
    float hr, mi, se;

    printf("\ndigite os segundos: ");
    scanf("%d", &temp_i);

    hr = temp_i / 3600;
    aux = temp_i % 3600;

    mi = aux / 60;
    se = aux % 60;

    printf("\ndeu %.0f horas, %.0f minutos e %.0f segundos\n", hr, mi, se);
}