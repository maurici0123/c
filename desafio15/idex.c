/*Faça um programa que seja capaz de armazenar os dados de três pessoas: nome, idade, peso e altura. Ao final, o algoritmo deve mostrar, na tela, o nome e a idade da primeira pessoa e o peso e altura da última pessoa. */

#include <stdio.h>

struct pessoa1
    {
        char nome[20];
        int idade;
        float peso;
        float altura;
    };
    struct pessoa2
    {
        char nome[20];
        int idade;
        float peso;
        float altura;
    };
    struct pessoa3
    {
        char nome[20];
        int idade;
        float peso;
        float altura;
    };

int main() {
    
    struct pessoa1 pes1;
    struct pessoa2 pes2;
    struct pessoa3 pes3;

    printf("\nqual o nome da primeira pessoa: ");
    fgets(pes1.nome, 20, stdin);
    fflush(stdin);

    printf("qual a idade da primeira pessoa: ");
    scanf("%d", &pes1.idade);

    printf("qual o peso da primeira pessoa: ");
    scanf("%f", &pes1.peso);

    printf("qual a altura da primeira passoa: ");
    scanf("%f", &pes1.altura);
    fflush(stdin);
    system("cls");


    printf("\nqual o nome da segunda pessoa: ");
    fgets(pes2.nome, 20, stdin);
    fflush(stdin);

    printf("qual a idade da segunda pessoa: ");
    scanf("%d", &pes2.idade);

    printf("qual o peso da segunda pessoa: ");
    scanf("%f", &pes2.peso);

    printf("qual a altura da segunda passoa: ");
    scanf("%f", &pes2.altura);
    fflush(stdin);
    system("cls");


    printf("\nqual o nome da terceira pessoa: ");
    fgets(pes3.nome, 20, stdin);
    fflush(stdin);

    printf("qual a idade da terceira pessoa: ");
    scanf("%d", &pes3.idade);

    printf("qual o peso da terceira pessoa: ");
    scanf("%f", &pes3.peso);

    printf("qual a altura da terceira passoa: ");
    scanf("%f", &pes3.altura);



    printf("\n\no nome da primeira pessoa: %s", pes1.nome);
    printf("a idade da primeira pessoa: %d\n", pes1.idade);
    printf("o peso da terceira pessoa: %.2f\n", pes3.peso);
    printf("a altura da terceira pessoa: %.2f\n", pes3.altura);

}