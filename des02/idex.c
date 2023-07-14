#include <stdio.h>

int main() {
    int n, i, j;

    do {
        printf("digite um numero de 1 a 8: ");
        scanf("%d", &n);
    } while (n<1 || n>8);

    for (i=1; i<=n; i++) {
        for (j=n-i; j>=1; j--) {
            printf(" ");
        }
        for (j=1; j<=i; j++) {
            printf("#");
        }    
        printf("  ");
        for (j=1; j<=i; j++) {
            printf("#");
        } 
        puts("");        
    }

}