/* simule uma calculadora, o usuario de escolher entre soma subtrair multiplicar e dividir, o usuario so poderar calcuçar dois numeros */

#include <stdio.h>

int main() {
    int op, n1, n2;
    float res;

    do {
        printf("\n---------------------------\n");
        printf("digite 1 para somar\n");
        printf("digite 2 para subtrair\n");
        printf("digite 3 para multiplicar\n");
        printf("digite 4 para dividir\n"); 
        printf("digite 5 para sair\n");           
        printf("---------------------------\n");
        scanf("%d", &op);

        if (op == 1) {

            printf("\ndigite um numero: ");
            scanf("%d", &n1);

            printf("digite outro numero: ");
            scanf("%d", &n2);

            res = n1+n2;
            printf("a soma dos numeros e : %.0f\n", res);
        } else if (op == 2) {

            printf("\ndigite um numero: ");
            scanf("%d", &n1);

            printf("digite outro numero: ");
            scanf("%d", &n2);

            res = n1-n2;
            printf("a subtracao dos numeros e : %.0f\n", res);
        } else if (op == 3) {

            printf("\ndigite um numero: ");
            scanf("%d", &n1);

            printf("digite outro numero: ");
            scanf("%d", &n2);

            res = n1*n2;
            printf("a multiplicacao dos numeros e : %.0f\n", res);
        } else if (op == 4) {

            printf("\ndigite um numero: ");
            scanf("%d", &n1);

            printf("digite outro numero: ");
            scanf("%d", &n2);

            res = n1/n2;
            printf("a divisao dos numeros e : %.2f\n", res);
        } 

    } while ( op != 5 );
    
}