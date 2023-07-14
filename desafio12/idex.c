/*Sabe-se que o quilowatt de energia custa um milésimo do salário mínimo. Faça um procedimento que receba o valor do salário minimo e quantidade de quilowatts consumida por uma residência.
O procedimento deve calcular e retornar através de passagem de parâmetros por referência:

a) o valor, em reais, de cada quilowatt; 
b) o valor, em reais, a ser pago por essa residência; 
c) o valor, em reais, a ser pago com desconto de 15%.

Sabendo disso, desenvolva um algoritmo que peça para o usuário inserir o valor do salário minimo e a quantidade de quilowatts consumida.
Invoque o respectivo procedimento e mostre, na tela, as informações dos itens a), b) e c). */

#include <stdio.h>

int main() {
    float qw, sal_min, con_qw, con_fin, con_des;

    printf("\nqual o salario minimo: ");
    scanf("%f", &sal_min);

    printf("quantos quilowatts foram consumidos: ");
    scanf("%f", &qw);

    con_qw = sal_min/1000;

    con_fin = con_qw * qw;

    con_des = (con_fin * 85)/100;

    printf("\no preco do quilowatt e de: %.2f\n", con_qw);
    printf("o total da conta e de: %.2f\n", con_fin);
    printf("ototal da conta com desconto de 15%% e de: %.2f\n", con_des);
}