#include <stdio.h>

void vetor(int v[4]) {
    int c;

    for (c = 0; c < 4; c++) {

        printf("%d ", v[c]);
    }
}

void matriz(int m[2][2]) {
    int i,j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", m[i][j]);
        }
        puts("");
    }
}

int main(void) {

    int vet[4] = {2,3,4,5};
    int mat[2][2] = {{1,2},{3,4}};

    printf("\n--- vetor ---\n\n");
    vetor(vet);

    printf("\n\n--- matriz ---\n\n");
    matriz(mat);
}