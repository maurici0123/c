/*Faça um programa que receba o número de horas trabalhadas por um gestor e o valor do salário minimo vigente. Crie uma função que calcule o salário a receber do gestor, seguindo as regras abaixo: 

I - a hora trabalhada vale a metade do salário minimo;
II - o salário bruto equivale ao número de horas trabalhadas multiplicadopelo valor da hora trabalhada;
III o imposto equivale a 3% do salario bruto;
IV o salário a receber equivale ao salário bruto menos o imposto.

Crie um algoritmo que invoque a respectiva função e mostre o salário a receber.*/

#include <stdio.h>

int main() {
    float sal_bru, sal_fin, sal_min, hr_tra, imp;

    printf("\nquantas horas trabalhada: ");
    scanf("%f", &hr_tra);

    printf("qual o salario minimo: ");
    scanf("%f", &sal_min);

    sal_bru = sal_min * (hr_tra/2);

    imp = (3 * sal_bru)/100;

    sal_fin = sal_bru - imp;

    printf("\no salario final e: %.2f", sal_fin);
}