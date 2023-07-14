#include <stdio.h>
#include <string.h>

#define n 50

int main() {

    char v1[n] = {"nao adentre a boa "};
    char v2[n] = {"noite apenas com ternura"};

    printf("antes do strcat: \n");
    puts(v1);
    puts(v2);

    strcat(v1,v2);

    printf("\ndpois do strcat: \n");
    puts(v1);
}