/* faça uma tabuada de 1 a 10 */

#include <stdio.h>

int main() {
    int uni, dez, res;

    puts("");
    for (dez=1; dez<=10; dez++) {
        for (uni=1; uni<=10; uni++) {
            res = dez*uni;
            printf("%d X %d = %d\n", dez, uni, res);
        }
        puts("");
    }
}