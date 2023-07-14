#include <stdio.h>

int maior(int a, int b);

int main(void) {

    int x, y, m;

    printf("digite um numero: ");
    scanf("%d", &x);

    printf("digite um numero: ");
    scanf("%d", &y);

    m = maior(x, y);

    printf("o maior numero e: %d", m);
}

int maior(int a, int b){

    if (a>b) {
        return a;
    } else {
        return b;
    }

}