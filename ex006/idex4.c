#include <stdio.h>
#include <string.h>

#define n 2

int main() {

    char v1[n];
    char v2[n] = {"8"};
    int cheked;

    printf("\ndigite um numero de 1 a 10: ");
    fgets(v1,n,stdin);
    fflush(stdin);

    cheked = strcmp(v2,v1);

    if (cheked == 0) {
        printf("\nnumero certo\n\n");
    } else {
        printf("\nnumero errado\n\n");
    }
}