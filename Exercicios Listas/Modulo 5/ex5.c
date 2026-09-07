/*
Escreva um programa que leia o valor de 3 (três) mercadorias. 
A primeira terá um desconto de 10% sobre o valor total da mercadoria; 
a segunda terá um acréscimo de 15% sobre o valor total da mercadoria; 
a terceira será corrigida de acordo com a fórmula:
valor = valor / raiz de pi
Entrada
O valor de 3 (três) mercadorias.
Saída
O valor de cada mercadoria ajustado de acordo com o enunciado.
*/

#include <stdio.h>
#include <math.h> // Vamos usar a sqrt()
#define PI 3.14159265358979323846 

int main(){

    //declarando as variáveis
    float mercadoria1, mercadoria2, mercadoria3;

    //Imprimindo o texto e recebendo o valor de cada variável
    printf("Digite o valor da Mercadoria 1: ");
    scanf("%f", &mercadoria1);

    printf("Digite o valor da Mercadoria 2: ");
    scanf("%f", &mercadoria2);

    printf("Digite o valor da Mercadoria 3: ");
    scanf("%f", &mercadoria3);

    //Fazendo o cálculo da primeira mercadoria -> "A primeira terá um desconto de 10% sobre o valor total da mercadoria"
    mercadoria1 = mercadoria1 - (mercadoria1 * 0.10);

    //Fazendo o cálculo da segunda mercadoria -> "a segunda terá um acréscimo de 15% sobre o valor total da mercadoria"
    mercadoria2 = mercadoria2 + (mercadoria2 * 0.15);

    //Fazendo o cálculo da terceira mercadoria -> "a segunda terá um acréscimo de 15% sobre o valor total da mercadoria"
    mercadoria3 = mercadoria3 / sqrt(PI);

    //Imprimindo o valor de cada variável
    printf("| Mercadoria 1: %.2f | Mercadoria 2: %.2f | Mercadoria 3: %.2f |\n", mercadoria1, mercadoria2, mercadoria3);

    return 0;

}