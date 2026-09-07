/* Escreva um programa que leia o valor de 3 (três) mercadorias. 
O programa deve gerar uma taxa de 10% para exportação de cada mercadoria. 
Imprimir o valor de cada mercadoria com a cobrança da taxa.
Entrada
3.0
1.0
2.0
Saída
3.3
1.1
2.2

Pseudocódigo:

Início
   DECLARAR M1, M2, M3    FLOAT

   LER M1
   M1 ← M1 + 0.1

   LER M2
   M2 ← M2 + 0.1

   LER M3
   M3 ← M3 + 0.1

   IMPRIMIR  M1, M2, M3


Fim

 */


#include <stdio.h>

int main(){

    float mercadoria1, mercadoria2, mercadoria3;

    //Imprimindo o texto e recebendo o valor de cada mercadoria
    printf("Digite o valor da Mercadoria 1: ");
    scanf("%f", &mercadoria1);

    printf("Digite o valor da Mercadoria 2: ");
    scanf("%f", &mercadoria2);

    printf("Digite o valor da Mercadoria 2: ");
    scanf("%f", &mercadoria3);

    //calculando o valor da taxa de 10% de cada mercadoria e guardando esse valor na própria variável
    mercadoria1 = (mercadoria1 * 0.10) + mercadoria1;

    mercadoria2 = (mercadoria2 * 0.10) + mercadoria2;

    mercadoria3 = (mercadoria3 * 0.10) + mercadoria3;

    //Imprimindo o valor de cada mercadoria com a taxa de 10%
    printf("Valores das Mercadorias com a Taxa de 10%%: \n");
    printf("| Mercadoria 1 - R$%.2f | Mercadoria 2 - R$%.2f | Mercadoria 3 - R$%.2f | \n", mercadoria1, mercadoria2, mercadoria3);

    return 0;

}