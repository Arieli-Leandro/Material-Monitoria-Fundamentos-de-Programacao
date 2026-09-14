#include <stdio.h>
#include <stdlib.h>

int main(){

    // Definindo valores iniciais para os testes
    double A = 0.0;
    int B = 2;
    double C = 8.0;

    printf("=- Ex 4 - Utilizando conceitos dos ultimos exercicios \n");

    // Ex 1: Traduzindo de Expressoes Matematica

    // Formula: A = sqrt(B * C) / (cos(B) + 1)
    A = sqrt(B * C) / (cos(B) + 1.0);
    printf("Aceleração calculada (A): %.2f\n", A);

    //Ex 2: Incrementos, Decrementos e Atribuicoes

    // Atualiza A com o pre-incremento de A somado ao pos-decremento de B
    int A_int = (int)A; // Convertendo para inteiro para aplicar os operadores inteiros
    
    A_int = (++A_int) + (B--); 
    // Passo 1: A e pre-incrementado
    // Passo 2: O valor atual de B e somado
    // Passo 3: B e decrementado apos a operacao (B passa a ser 1)
    
    printf("Valor final de A (A_int): %d\n", A_int);
    printf("Valor atualizado de B: %d\n", B);

    // ETAPA 3: Precedencia e Tratamento de Divisao por Zero
    int divisor = B - 1;
    
    if (divisor == 0) {
        printf("Resultado: Indeterminado (Erro de Divisao por Zero!)\n");
    } else {
        double T = 100.0 / divisor;
        printf("Tempo final (T): %.2f\n", T);
    }


    return 0;

}