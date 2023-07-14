#include <stdio.h>
#include <string.h>

#define n 20
int main() {

    char v1[n] = {"ola mundo"};
    char v2[n] = {"helo, world"};

    printf("antes do strcpy: \n");
    puts(v1);
    puts(v2);

    strcpy(v2,v1);

    printf("\ndepois do strcpy: \n");
    puts(v1);
    puts(v2);
}