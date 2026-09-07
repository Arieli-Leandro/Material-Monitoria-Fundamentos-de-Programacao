/*
Escreva um programa que leia o valor de 3 (três) mercadorias. 
O programa deve aplicar o seguinte cálculo para cada valor:
valor = sqrt(valor) + valor3 
*/

#include <stdio.h>
#include <math.h> // -> Usaremos a sqtr() e a pow() da biblioteca math.h 
//sqrt(numero) -> Raiz quadrada desse número
//pow(numero, expoente) -> Exponenciação


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

    //Calculando o novo valor de cada variável e colocando esse novo valor na mesma variável
    mercadoria1 = sqrt(mercadoria1) + pow(mercadoria1, 3);
    mercadoria2 = sqrt(mercadoria2) + pow(mercadoria2, 3);
    mercadoria3 = sqrt(mercadoria3) + pow(mercadoria3, 3);

    //Imprimindo os novos valores de cada mercadoria
    printf("| Mercadoria 1 = %.2f | Mercadoria 2 = %.2f | Mercadoria 3 = %.2f | \n", mercadoria1, mercadoria2, mercadoria3);

    return 0;

}