#include <stdio.h>

int main(){
    int x;

    printf("digite um numero entre 1 e 7: ");
    scanf("%d", &x);

    switch(x){
        case 1:
            printf("domingo");
            break;
        case 2: 
            printf("segunda");
            break;
        case 3: 
            printf("terca");
            break;
        case 4:
            printf("quarta");
            break;
        case 5:
            printf("quinta");
            break;
        case 6:
            printf("sexta");
            break;
        case 7: 
            printf("sabado");
            break;
        default:
            printf("e de 1 a 7 krai");
            break;    
    } 
}