#include <stdio.h>
#include "poligonos.h"

int main(void) {
    
    float a;

    printf("qual o raio do círculo: ");   
    scanf("%f", &a);

    printf("a area do círculo e:  %.2f.\n", calcirculo(a));
}