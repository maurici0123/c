/*Desenvolva um algoritmo que preencha uma matriz numérico de dimensões 3x3. Após preencher todo a matriz, o usuário deve inserir uma chave de busca X. Caso exista algum número igual a X, dentro da matriz, o algoritmo deve mostrar, na tela, os índices da Linha e da coluna da posição na qual na qual x foi encontrado pela primeira vez. Caso contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não encontrada. */

#include <stdio.h>



int main() {
    int mat [2][2], i, j, x, aux;
    aux=0;

    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf("digite um numero para L%d C%d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\ndigite um numero para buscar: ");
    scanf("%d", &x);

    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            if (x == mat[i][j]) {
                printf("\no numero foi encontrado na L%d C%d", i+1, j+1);
                aux=1;
                break;
            } 
        }
    }
    if (aux!=1) {
        printf("\nbusca nao encontrada");
    }
}