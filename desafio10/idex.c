/*0 custo de um carro novo ao consumidor final é o preço de fábrica somado ao percentual de lucro do distribuidor, acrescido dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veiculo, o percentual de Lucro do distribuidor e o percentual de impostos.

Em cada item, crie uma função distinta para calcular e retornar:

a) o valor correspondente ao Lucro do distribuidor; 
b) o valor correspondente aos impostos; 
c) o preço final do veículo.

Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada uma das*/

#include <stdio.h>

int main() {

    float fun_imp(float p_fab, float por_imp);

    float fun_dis(float p_fab, float por_dis);

    float fun_fin( float p_fab, float aum_imp, float aum_dis);
    

    float p_fab, por_dis, por_imp, p_final, aum_dis, aum_imp;

    printf("\nqual o preco de fabrica do carro: ");
    scanf("%f", &p_fab);

    printf("qual a porcentagem dos impostos: ");
    scanf("%f ", &por_imp);

    printf("qual a porcentagem do distribuidor: ");
    scanf("%f ", &por_dis);

    aum_imp = fun_imp(p_fab, por_imp);

    aum_dis = fun_dis(p_fab, por_dis);

    p_final = fun_fin(p_fab, aum_imp, aum_dis);

    printf("\no aumento dos impostos e de: R$ %.0f\n", aum_imp);
    printf("o aumento do distribuidor e de: R$ %.0f\n", aum_dis);
    printf("o preco final e de: R$ %.0f\n", p_final);

}

float fun_imp(float p_fab, float por_imp) {
    return (p_fab*por_imp)/100;
}

float fun_dis(float p_fab, float por_dis) {
    return (p_fab*por_dis)/100;
}

float fun_fin(float p_fab, float aum_imp, float aum_dis) {
    return p_fab + aum_imp + aum_dis;
}