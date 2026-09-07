#include <stdio.h>

int main(){

    //Declarando A e B
    int A, B;

    //Podemos declarar também como:
    // int A;
    // int B;

    //Atribuindo o valor 1 para a variável A
    A = 1;

    //Atribuindo o valor 2 para a variável B
    B = 2;

    //Atribuindo o valor da expressão "A + B" para a variável A
    A = A + B;

    //Exibindo o valor de A
    //Usando %i porque a variável A foi declarada como inteiro
    printf("%i", A);

    return 0;

}