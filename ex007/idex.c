#include <stdio.h>

int main(void) {

    struct ficha_aluno
    {
        char nome[30];
        int idade;
        float nota1;
        float nota2;
    };
    
    struct ficha_aluno aluno;

    printf("\n ---------registro do aluno(a)--------- \n\n");

    printf("nome do aluno(a): ");
    fgets(aluno.nome, 30, stdin);

    printf("qual a idade do aluno(a): ");
    scanf("%d", &aluno.idade);

    printf("qual a primeira nota do aluno(a): ");
    scanf("%f", &aluno.nota1);

    printf("qual a segunda nota do aluno(a): ");
    scanf("%f", &aluno.nota2);

    printf("\n ---------resultado---------\n \n");

    printf("nome: %s", aluno.nome);
    printf("idade: %d\n", aluno.idade);
    printf("nota 1: %.2f\n", aluno.nota1);
    printf("nota 2: %.2f\n\n", aluno.nota2);
}