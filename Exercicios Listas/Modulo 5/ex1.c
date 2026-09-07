/* Escreva um programa que leia o valor de 5 (cinco) mercadorias. 
O desconto para pagamento à vista é de 15% sobre o valor total da compra de todas as mercadorias compradas. 
O programa deve imprimir o valor de cada mercadoria, o valor total da compra, e o valor a ser pago à vista.
Entrada
1.1
1.2
1.3
1.4
1.5

Saída
1.10
1.20
1.30
1.40
1.50
Total = R$ 6.50
A vista = R$ 5.53

Pseudocódigo:
Início
     DECLARAR  M1, M2, M3, M4, M5  FLOAT

     LER   M1
     LER   M2
     LER   M3
     LER   M4
     LER   M5

     TOTAL ← (M1+M2+M3+M4+M5)     
     DESCONTO ← TOTAL * 0.15 

     IMPRIMIR M1, M2, M3, M4, M5
     IMPRIMIR  “Total = R$”
     IMPRIMIR  TOTAL
     IMPRIMIR  “A vista = R$”
     IMPRIMIR  TOTAL - DESCONTO

Fim
 */


#include <stdio.h>

int main(){

    //Declarando as variáveis
    float mercadoria1, mercadoria2, mercadoria3, mercadoria4, mercadoria5;
    float total_compra;
    float total_compra_com_desconto;

    //Imprimindo o texto e recendo o valor de cada variável
    printf("Digite o valor da Mercadoria 1: ");
    scanf("%f", &mercadoria1);

    printf("Digite o valor da Mercadoria 2: ");
    scanf("%f", &mercadoria2);

    printf("Digite o valor da Mercadoria 3: ");
    scanf("%f", &mercadoria3);

    printf("Digite o valor da Mercadoria 4: ");
    scanf("%f", &mercadoria4);

    printf("Digite o valor da Mercadoria 5: ");
    scanf("%f", &mercadoria5);

    //Calculando o valor total da compra
    total_compra = mercadoria1 + mercadoria2 + mercadoria3 + mercadoria4 + mercadoria5;

    //Calculando o valor total da compra com desconto
    total_compra_com_desconto =  total_compra - (total_compra * 0.15);

    //Exibindo o valor das mercadorias
    printf("| Mercadora 1 - R$%.2f | Mercadora 2 - R$%.2f | Mercadora 3 - R$%.2f | Mercadora 4 - R$%.2f | Mercadora 5 - R$%.2f | \n", mercadoria1, mercadoria2, mercadoria3, mercadoria4, mercadoria5);

    //Exibindo o valor total da compra
    printf("|Valor total da compra: %.2f |\n", total_compra);

    //Exibindo o valor total da compra com desconto
    printf("|Valor total da compra com desconto a vista: %.2f |\n", total_compra_com_desconto);

    return 0;

}