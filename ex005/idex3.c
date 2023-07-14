#include <stdio.h>

int main() {

    char s[10];

    printf("digite algo (leitura pelo gets): ");
    gets(s);
    fflush(stdin);

    puts("resultado: ");
    puts(s);

    printf("digite algo (leitura pelo fgets): ");
    fgets(s, 10, stdin);
    fflush(stdin);

    printf("resultado: %s", s);
}