/* crie uma sequencia de fibonacci com 8 numeros*/

#include <stdio.h>

int main() {
    int n1, n2, p, c;

    n1 = 0;
    n2 = 1;

    printf("%d\n", n1);
    printf("%d\n", n2);

    for (c=1; c<=6; c++) {
        p = n1+n2;
        printf("%d\n", p);
        n1 = n2;
        n2 = p;
    }
}