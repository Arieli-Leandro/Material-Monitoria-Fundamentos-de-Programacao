#include <stdio.h>

int main(){

    //Declarando A e B
    float A, B; //Ou float A; float B;

    //Imprimindo o texto para o usuário
    printf("Digite o valor de A: ");

    //Lendo o valor de A
    scanf("%f", &A);

    //Imprimindo o texto para o usuário
    printf("Digite o valor de B: ");

    //Lendo o valor de B
    scanf("%f", &B);
    
    //Calculando a expressão A ← A * B / B * A
    A = (A * B) / (B * A);

    //Imprimindo o valor de A (Aqui estou imprimindo com tds as casas decimais)
    printf("A = %f \n", A);

    //Aqui eu posso limitar a qtd de casas decimais que eu quero (estou utilizando 2)
    printf("A = %.2f \n", A);

    return 0;

}