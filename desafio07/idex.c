/* some todos os numeros inteiros entre 1 a 10 */

#include <stdio.h>

int main() {
    int num, soma, op;

    soma = 0;
    do {
        printf("\n------------------------\n");
        printf("didite 1 para\n");
        printf("digite 2 para encerrar\n");
        printf("--------------------------\n");
        scanf("%d", &op);

        if (op == 1) {
            printf("digite um numero: ");
            scanf("%d", &num);

            soma += num;
        }
    system("cls");
    } while (op!=2);

    printf("a soma dos numeros e de: %d", soma);
}