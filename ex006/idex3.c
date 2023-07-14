#include <stdio.h>
#include <string.h>

#define n 50

int main() {

    char v1[n];
    int l;

    printf("\ndigite algo: ");
    fgets(v1,n,stdin);
    fflush(stdin);

    l = strlen(v1);

    printf("\nessa e o comprimneto da texto: %d\n\n", l-1);

    for (l=0; l<strlen(v1); l++) {
        printf("%c", v1[l]);
    }
    puts("");
}